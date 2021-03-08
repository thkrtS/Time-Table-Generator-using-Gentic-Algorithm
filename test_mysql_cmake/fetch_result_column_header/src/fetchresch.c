#include <stdio.h>
#include <mysql/mysql.h>
#include <stdlib.h>

void finish_with_error(MYSQL* connection) {
	fprintf(stderr, "%s\n", mysql_error(connection));
	mysql_close(connection);
	exit(1);
}

int main(int argc, char **argv) {
	MYSQL* connection = mysql_init(NULL);
	if (connection == NULL) {
		fprintf(stderr, "%s\n", mysql_error(connection));
		exit(1);
	}
	if (!(mysql_real_connect(connection,
					"127.0.0.1",
					"",  // provide username
					"",  // provide password
					"",  // provide db name
					0, NULL, 0))) {
		finish_with_error(connection);
	}
	if (mysql_query(connection, "select * from cars")) {
		finish_with_error(connection);
	}
	MYSQL_RES* resultset = mysql_store_result(connection);
	if (resultset == NULL) {
		finish_with_error(connection);
	}
	size_t num_field = mysql_num_fields(resultset);
	MYSQL_ROW row;
	MYSQL_FIELD* field;
	while ((row = mysql_fetch_row(resultset)) != NULL) {
		for (int i = 0; i < num_field; ++i) {
			if (i == 0) {
				while ((field = mysql_fetch_field(resultset))) {
					printf("%s ", field->name);
				}
				printf("\n");
			}
			printf("%s ", row[i] ? row[i] : NULL);
		}
	}
	printf("\n");
	mysql_free_result(resultset);
	mysql_close(connection);
	return 0;
}
