#include <stdio.h>
#include <mysql/mysql.h>
#include <stdlib.h>

void finish_with_error(MYSQL* connection) {
	fprintf(stderr, "%s\n", mysql_error(connection));
	mysql_close(connection);
	exit(1);
}

int main(int argc, char **argv) {
	MYSQL* conn = mysql_init(NULL);
	int status;
	if (conn == NULL) {
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
	if (mysql_real_connect(conn,
				"127.0.0.1",
				"",  // provide username here
				"",  // provide password of user
				"",  // provide database name
				0, NULL,
				CLIENT_MULTI_STATEMENTS) == NULL) {
		finish_with_error(conn);
	}
	if (mysql_query(conn, "select name from cars where id = 2;\
				select name from cars where id = 3;\
				select name from cars where id = 5")) {
					finish_with_error(conn);
				}
	do {
		MYSQL_RES* result = mysql_store_result(conn);
		if (result == NULL) {
			finish_with_error(conn);
		}
		MYSQL_ROW result_row = mysql_fetch_row(result);
		printf("%s\n", *result_row);
		mysql_free_result(result);
		status = mysql_next_result(conn);
		if (status > 0) {
			finish_with_error(conn);
		}
	} while (status == 0);
	mysql_close(conn);
	return 0;
}
