#include <stdio.h>
#include <stdlib.h>

#include <mysql/mysql.h>

struct ConDetails {
	char* server;
	char* user;
	char* password;
	char* database;
};

MYSQL* mysql_connection_setup(struct ConDetails mysql_details) {
	MYSQL* connection = mysql_init(NULL);
	if (!mysql_real_connect(connection, mysql_details.server,
				mysql_details.user, mysql_details.password,
				mysql_details.database, 0, NULL, 0)) {
		fprintf(stdout, "Connection error:\n%s\n", mysql_error(connection));
		exit(1);
		/*perror("Connection error: %s\n", mysql_error(connection));*/
	}
	return connection;
}

MYSQL_RES* mysql_perform_query(MYSQL* connection, char* sql_query) {
	if (mysql_query(connection, sql_query)) {
		fprintf(stdout, "Query error:\n%s\n", mysql_error(connection));
		exit(1);
	}
	return mysql_use_result(connection);
}

int main(int argc, char **argv) {
	MYSQL* connection;
	MYSQL_RES* result;
	MYSQL_ROW result_rows;

	struct ConDetails my_connection;
	my_connection.server = "127.0.0.1";
	my_connection.user = "";
	my_connection.password = "";
	my_connection.database = "information_schema";

	// connection to database
	connection = mysql_connection_setup(my_connection);
	result = mysql_perform_query(connection, "show tables");
	printf("Tables in information_schema are: \n");
	while ((result_rows = mysql_fetch_row(result)) != NULL) {
		printf("%s\n", *result_rows);
	}
	// cleanup
	mysql_free_result(result);
	mysql_close(connection);
	return 0;
}
