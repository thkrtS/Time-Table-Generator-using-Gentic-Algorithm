
/** demo program of how the data will be stored and retrieved for initial
  * population creation from database(mysql) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <mysql/mysql.h>

#define TEACHERS_DETAILS_FILE "./teachers_list.csv"

#define MAX_TEACHERS 50
#define TEACHERS_ATTR_COUNT 3

#define INSERT_TEACHER_STATEMENT "insert into Teachers values(?, ?, ?)"
#define SELECT_TEACHERS_STATEMENT "select * from Teachers"
#define DELETE_TEACHER_STATEMENT "delete from Teachers where id = ?"
#define DELETE_TEACHERS_STATEMENT "delete from Teachers"

struct Teacher {
	unsigned long teacher_id;
	char* teacher_name;
	unsigned long number_of_classes;
};

struct College {
	struct Teacher* teachers;
};

void error_exit(char* err);

void show_help();

size_t get_teachers_details(struct Teacher* teachers);
void split_details(char** split_array, char* details, char* delim);
void print_teachers_details(struct Teacher* teachers, size_t number_of_teachers);
void free_teachers_names(struct Teacher* teachers, size_t number_of_teachers);

MYSQL* connDB();
static void finish_with_error_db(MYSQL* connection);
static void show_stmt_error_db(MYSQL_STMT* statement);
void create_teacher_table_if_not_exists(MYSQL* connection);
MYSQL_RES* check_if_teacher_table_exists(MYSQL* connection);
void do_insertion(MYSQL* connection);
void do_selection(MYSQL* connection);
void do_single_delete(MYSQL* connection);
void do_delete_all(MYSQL* connection);
MYSQL_STMT* initialize_prepared_statements_insert(MYSQL* connenction);
MYSQL_STMT* initialize_prepared_statements_select(MYSQL* connenction);
MYSQL_STMT* initialize_prepared_statements_delete(MYSQL* connection);
MYSQL_STMT* initialize_prepared_statements_delete_all(MYSQL* connection);
void insert_teachers_data(MYSQL* connection, MYSQL_STMT* insert_teacher_stmt, struct Teacher* teachers, size_t num_of_teachers);
void select_teachers(MYSQL* connection, MYSQL_STMT* select_teachers_stmt);
void delete_a_teacher(MYSQL* connection, MYSQL_STMT* delete_teacher_stmt, unsigned long id);
void delete_all_teachers(MYSQL* connection, MYSQL_STMT* delete_teacher_stmt);

int main(int argc, char **argv) {
	if (argc != 2) {
		fprintf(stderr, "require query type as argument\n");
		exit(1);
	}

	/** code to interact with db now */
	MYSQL* conn = connDB();
	create_teacher_table_if_not_exists(conn);

	char* got_option = *(argv + 1);

	if (strncmp(got_option, "insert", 6) == 0) {
		do_insertion(conn);
	}
	else if (strncmp(got_option, "select", 6) == 0) {
		do_selection(conn);
	}
	else if (strncmp(got_option, "single_delete", 13) == 0) {
		do_single_delete(conn);
	}
	else if (strncmp(got_option, "delete_all", 10) == 0) {
		do_delete_all(conn);
	}
	else if (strncmp(got_option, "help", 4) == 0) {
		show_help();
	}

	mysql_close(conn);

	return 0;
}

void show_help() {
	printf("Usage:\n\
Provide a query type option as 2nd argument, Options are:\n\
	\"insert\": to perform insertion in table from provided file\n\
	\"select\": to get all the values of every attr of table(select * from <table>)\n\
	\"single_delete\": to delete the given id\n\
	\"delete_all\": to delete all the elements of table\n\
	\"help\": to show help\n");
}

void error_exit(char* error) {
	perror(error);
	perror("\n");
	exit(1);
}

size_t get_teachers_details(struct Teacher* teachers) {
	FILE* fptr_teacher;
	if (!(fptr_teacher = fopen(TEACHERS_DETAILS_FILE, "r"))) {
		error_exit("Error in opening teachers_list.txt");
	}
	char* detail = (char*)malloc(10000 * sizeof(char));
	char* details_splitted[TEACHERS_ATTR_COUNT];
	size_t count = 0;
	while ((fgets(detail, BUFSIZ, fptr_teacher))) {
		split_details(details_splitted, detail, ",");
		teachers[count].teacher_id = atoi(details_splitted[0]);
		teachers[count].teacher_name = (char*)malloc(255 * sizeof(char));
		strncpy(teachers[count].teacher_name, details_splitted[1], strlen(details_splitted[1]));
		teachers[count].number_of_classes = atoi(details_splitted[2]);
		count++;
	}
	free(detail);
	return count;
}

void split_details(char** split_array, char* details, char* delim) {
	char* token = strtok(details, delim);
	size_t count = 0;
	while (token != NULL) {
		split_array[count] = token;
		token = strtok(NULL, delim);
		count++;
	}
}

void print_teachers_details(struct Teacher* teachers, size_t number_of_teachers) {
	printf("printing teachers details(data taken from csv file)\n");
	printf("ID\t\tName\t\tNumber of Classes\n");
	printf("---------------------------------------------------\n");
	for (size_t idx = 0; idx < number_of_teachers; ++idx) {
		printf("%ld\t\t%s\t\t%ld\n", teachers[idx].teacher_id,
				teachers[idx].teacher_name,
				teachers[idx].number_of_classes);
		/*free(teachers[idx].teacher_name);*/
	}
}

void free_teachers_names(struct Teacher* teachers, size_t number_of_teachers) {
	printf("Freeing teachers names: \n");
	for (size_t idx = 0; idx < number_of_teachers; ++idx) {
		free(teachers[idx].teacher_name);
	}
}

void finish_with_error_db(MYSQL* connection) {
	fprintf(stderr, "(%d) [%s] \"%s\" \n", mysql_errno(connection),
			mysql_sqlstate(connection),
			mysql_error(connection));
	mysql_close(connection);
	exit(1);
}

void show_stmt_error_db(MYSQL_STMT* statement) {
	fprintf(stderr, "(%d) [%s] \"%s\" \n", mysql_stmt_errno(statement),
			mysql_stmt_sqlstate(statement),
			mysql_stmt_error(statement));
}

MYSQL* connDB() {
	size_t timeout = 2;
	MYSQL* connection = mysql_init(NULL);
	if (connection == NULL) {
		fprintf(stderr, "%s\n", mysql_error(connection));
	}
	mysql_options(connection, MYSQL_OPT_CONNECT_TIMEOUT, &timeout);
	mysql_options(connection, MYSQL_READ_DEFAULT_FILE, (void*)"./my.cnf");
	if ((mysql_real_connect(connection,
					NULL,
					NULL,
					NULL,
					NULL,
					0, NULL, 0)) == NULL) {
		finish_with_error_db(connection);
	}
	return connection;
}

void create_teacher_table_if_not_exists(MYSQL* connection) {
	/*if (mysql_query(connection, "drop table if exists Teachers")) {*/
		/*finish_with_error_db(connection);*/
	/*}*/
	MYSQL_RES* result = check_if_teacher_table_exists(connection);
	MYSQL_ROW result_row;
	bool table_exists = false;
	size_t count = 0;
	while ((result_row = mysql_fetch_row(result)) != NULL) {
		if (count >= 1) {
			error_exit("You shouldn't get more than 1 row as result for checking\
					if a table exits or not, something went wrong");
		}
		if (atoi(*result_row) == 1) {
			table_exists = true;
			printf("table named 'Teachers' already exists in db\n");
		}
	}
	if (!table_exists) {
		printf("table named 'Teachers' doesn't exists in db, creating one\n");
		if (mysql_query(connection,
					"create table Teachers(id int primary key auto_increment, \
					name varchar(255) not null, \
					`no. of classes` int);")) {
			finish_with_error_db(connection);
		}
	}
}

MYSQL_RES* check_if_teacher_table_exists(MYSQL* connection) {
	char* query = "select count(*) from information_schema.tables\
				   where table_schema='testcdb' and table_name='Teachers'";
	if (mysql_query(connection, query)) {
		finish_with_error_db(connection);
	}
	return mysql_use_result(connection);
}

void do_insertion(MYSQL* connection) {
	struct College college;
	college.teachers = (struct Teacher*)malloc(sizeof(struct Teacher) * MAX_TEACHERS);

	/** code to get details from csv file */
	size_t number_of_teachers = get_teachers_details(college.teachers);
	if (number_of_teachers == 0) {
		fprintf (stderr, "No details for teacher is provided, run with 'help' as argument");
		exit(1);
	}
	printf("Number of teachers: %zu\n", number_of_teachers);
	print_teachers_details(college.teachers, number_of_teachers);


	MYSQL_STMT* insert_teacher_stmt = NULL;

	insert_teacher_stmt = initialize_prepared_statements_insert(connection);
	insert_teachers_data(connection, insert_teacher_stmt, college.teachers, number_of_teachers);

	mysql_stmt_close(insert_teacher_stmt);

	free_teachers_names(college.teachers, number_of_teachers);
	free(college.teachers);
}

void do_selection(MYSQL* connection) {
	MYSQL_STMT* select_teachers_stmt = NULL;

	select_teachers_stmt = initialize_prepared_statements_select(connection);
	select_teachers(connection, select_teachers_stmt);

	mysql_stmt_close(select_teachers_stmt);
}

void do_single_delete(MYSQL* connection) {
	unsigned long id_to_delete;
	printf("Enter the id to delete: \n");
	scanf("%lu", &id_to_delete);

	MYSQL_STMT* delete_teacher_stmt = NULL;

	delete_teacher_stmt = initialize_prepared_statements_delete(connection);
	delete_a_teacher(connection, delete_teacher_stmt, id_to_delete);

	mysql_stmt_close(delete_teacher_stmt);
}

void do_delete_all(MYSQL* connection) {
	MYSQL_STMT* delete_all_teachers_stmt = NULL;

	delete_all_teachers_stmt = initialize_prepared_statements_delete_all(connection);
	delete_all_teachers(connection, delete_all_teachers_stmt);

	mysql_stmt_close(delete_all_teachers_stmt);
}

MYSQL_STMT* initialize_prepared_statements_insert(MYSQL* connection) {
	MYSQL_STMT* insert_teacher_stmt = mysql_stmt_init(connection);
	if (insert_teacher_stmt == NULL) {
		finish_with_error_db(connection);
	}
	/*int result = mysql_stmt_prepare(insert_teacher_stmt, INSERT_TEACHER_STATEMENT, strlen(INSERT_TEACHER_STATEMENT));*/
	/*if (result != 0) {*/
		/*error_exit("insert_teacher_stmt failed");*/
	/*}*/
	/*if (mysql_stmt_prepare(insert_teacher_stmt, INSERT_TEACHER_STATEMENT, strlen(INSERT_TEACHER_STATEMENT))) {*/
	if (mysql_stmt_prepare(insert_teacher_stmt, "INSERT INTO Teachers VALUES (?,?,?)", -1)) {
		show_stmt_error_db(insert_teacher_stmt);
		finish_with_error_db(connection);
	}
	size_t count = mysql_stmt_param_count(insert_teacher_stmt);
	printf("There are %zu number of attributes to insert in table\n", count);
	return insert_teacher_stmt;
}

void insert_teachers_data(MYSQL* connection, MYSQL_STMT* insert_teacher_stmt, struct Teacher* teachers, size_t num_of_teachers) {
	MYSQL_BIND bind[TEACHERS_ATTR_COUNT];

	memset(bind, 0, sizeof(bind));

	// can't fully understood significance of this
	unsigned int rows_to_insert_array_size = TEACHERS_ATTR_COUNT;

	my_ulonglong affected_rows;

	char* name = (char*)malloc(255);
	unsigned long id;
	unsigned long classes_num;
	unsigned long name_len;

	int result;

	bind[0].buffer_type = MYSQL_TYPE_LONG;
	bind[0].buffer = (char*)&id;
	bind[0].length = 0;
	bind[0].is_null = (my_bool*)0;
	bind[0].is_unsigned = 1;

	bind[1].buffer_type = MYSQL_TYPE_STRING;
	bind[1].buffer = name;
	bind[1].buffer_length = 255;
	bind[1].length = &name_len;
	bind[1].is_null = (my_bool*)0;

	bind[2].buffer_type = MYSQL_TYPE_LONG;
	bind[2].buffer = (char*)&classes_num;
	bind[2].length = 0;
	bind[2].is_null = (my_bool*)0;
	bind[2].is_unsigned = 1;

	mysql_stmt_attr_set(insert_teacher_stmt, STMT_ATTR_ARRAY_SIZE, &rows_to_insert_array_size);
	result = mysql_stmt_bind_param(insert_teacher_stmt, bind);  // <-- execution is failing because bind is not binded to insert_teacher_stmt
	if (result != 0) {
		/*error_exit("Can't bind param to statement 'insert_teacher_stmt'");*/
		show_stmt_error_db(insert_teacher_stmt);
		finish_with_error_db(connection);
	}

	for (size_t idx = 0; idx < num_of_teachers; ++idx) {
		id = teachers[idx].teacher_id;
		name_len = strlen(teachers[idx].teacher_name);
		strncpy(name, teachers[idx].teacher_name, 255);
		classes_num = teachers[idx].number_of_classes;

		result = mysql_stmt_execute(insert_teacher_stmt);  // <-- failing here everytime
		if (result != 0) {
			printf("iteration number: %zu\n", idx);
			/*error_exit("Can't execute statement 'insert_teacher_stmt'");*/
			show_stmt_error_db(insert_teacher_stmt);
			finish_with_error_db(connection);
		}
	}
	free(name);
	affected_rows = mysql_stmt_affected_rows(insert_teacher_stmt);
	fprintf (stdout, "Total affected rows: %lu\n", (unsigned long)affected_rows);
}

MYSQL_STMT* initialize_prepared_statements_select(MYSQL* connection) {
	MYSQL_STMT* select_teachers_stmt = mysql_stmt_init(connection);
	if (select_teachers_stmt == NULL) {
		finish_with_error_db(connection);
	}
	if (mysql_stmt_prepare(select_teachers_stmt, SELECT_TEACHERS_STATEMENT, strlen(SELECT_TEACHERS_STATEMENT))) {
		finish_with_error_db(connection);
	}
	return select_teachers_stmt;
}

void select_teachers(MYSQL* connection, MYSQL_STMT* select_teachers_stmt) {
	size_t num_fields;
	char* teacher_name = (char*)malloc(255 * sizeof(char));
	int teacher_id;
	int num_of_classes;
	unsigned long teacher_name_len;

	MYSQL_BIND bind[TEACHERS_ATTR_COUNT];
	MYSQL_FIELD* fields;
	MYSQL_RES* metadata;
	my_bool isNULL[TEACHERS_ATTR_COUNT];

	int result = 0;

	num_fields = mysql_stmt_field_count(select_teachers_stmt);
	printf("There are total %zu number of fields available.\n", num_fields);

	metadata = mysql_stmt_result_metadata(select_teachers_stmt);
	if (metadata == NULL) {
		error_exit("Failed to get metadata.");
	}

	fields = mysql_fetch_fields(metadata);

	memset(bind, 0, sizeof(bind));

	bind[0].buffer_type = fields[0].type;
	bind[0].buffer = &teacher_id;
	bind[0].is_null = &isNULL[0];

	bind[1].buffer_type = fields[1].type;
	bind[1].buffer = teacher_name;
	bind[1].buffer_length = 255;
	bind[1].is_null = &isNULL[1];
	bind[1].length = &teacher_name_len;

	bind[2].buffer_type = fields[2].type;
	bind[2].buffer = &num_of_classes;
	bind[2].is_null = &isNULL[2];

	result = mysql_stmt_bind_result(select_teachers_stmt, bind);
	if (result != 0) {
		error_exit("bind result failed, 'select_teachers_stmt'");
	}
	result = mysql_stmt_execute(select_teachers_stmt);
	if (result != 0) {
		error_exit("execution failed, 'select_teachers_stmt'");
	}

	size_t row = 0;
	printf("row\tID\t\tName\t\tNumber of Classes\n");
	printf("-----------------------------------------------------------\n");
	while(true) {
		row++;
		result = mysql_stmt_fetch(select_teachers_stmt);
		if (result == MYSQL_NO_DATA) {
			printf("There is not data any more\n");
			break;
		}
		if (result != 0) {
			printf("Error happend while fetching data, error code: %d\n", result);
			finish_with_error_db(connection);
		}
		teacher_name[teacher_name_len] = '\0';
		printf("%zu\t%d\t\t%s\t\t%d\n", row, teacher_id, teacher_name, num_of_classes);
	}
	free(teacher_name);
	mysql_free_result(metadata);
}


MYSQL_STMT* initialize_prepared_statements_delete(MYSQL* connection) {
	MYSQL_STMT* delete_teacher_stmt = mysql_stmt_init(connection);
	size_t count = 0;
	if (delete_teacher_stmt == NULL) {
		finish_with_error_db(connection);
	}
	if (mysql_stmt_prepare(delete_teacher_stmt, DELETE_TEACHER_STATEMENT, strlen(DELETE_TEACHER_STATEMENT))) {
		show_stmt_error_db(delete_teacher_stmt);
		finish_with_error_db(connection);
	}
	count = mysql_stmt_param_count(delete_teacher_stmt);
	printf("param count for deleteion: %zu\n", count);
	return delete_teacher_stmt;
}

void delete_a_teacher(MYSQL* connection, MYSQL_STMT* delete_teacher_stmt, unsigned long id) {
	printf("got into deletion\n");
	MYSQL_BIND bind;
	unsigned int array_size = 1;
	int result;

	memset(&bind, 0, sizeof(MYSQL_BIND));

	bind.buffer_type = MYSQL_TYPE_LONG;
	bind.buffer = &id;
	bind.is_null = 0;
	bind.length = 0;
	bind.is_unsigned = 1;

	mysql_stmt_attr_set(delete_teacher_stmt, STMT_ATTR_ARRAY_SIZE, &array_size);
	result = mysql_stmt_bind_result(delete_teacher_stmt, &bind);
	if (result != 0) {
		show_stmt_error_db(delete_teacher_stmt);
		error_exit("bind result failed, 'delete_teacher_stmt'");
	}
	result = mysql_stmt_execute(delete_teacher_stmt);
	if (result != 0) {
		error_exit("execution failed, 'delete_teacher_stmt'");
	}
}

MYSQL_STMT* initialize_prepared_statements_delete_all(MYSQL* connection) {
	MYSQL_STMT* delete_teacher_stmt = mysql_stmt_init(connection);
	size_t count = 0;
	if (delete_teacher_stmt == NULL) {
		finish_with_error_db(connection);
	}
	if (mysql_stmt_prepare(delete_teacher_stmt, DELETE_TEACHERS_STATEMENT, strlen(DELETE_TEACHERS_STATEMENT))) {
		show_stmt_error_db(delete_teacher_stmt);
		finish_with_error_db(connection);
	}
	return delete_teacher_stmt;
}

void delete_all_teachers(MYSQL* connection, MYSQL_STMT* delete_all_teachers_stmt) {
	if (mysql_stmt_execute(delete_all_teachers_stmt)) {
		show_stmt_error_db(delete_all_teachers_stmt);
		finish_with_error_db(connection);
	}
}
