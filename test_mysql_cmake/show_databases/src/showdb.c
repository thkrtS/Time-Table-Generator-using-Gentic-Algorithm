#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

int main(int argc, char **argv) {
	MYSQL* con = mysql_init(NULL);
	if (con == NULL) {
		fprintf(stderr, "conn empty: %s\n", mysql_error(con));
		exit(1);
	}
	if (!mysql_real_connect(con, "127.0.0.1", "", "", NULL, 0, NULL, 0)) {
		fprintf(stderr, "conn error: %s\n", mysql_error(con));
		mysql_close(con);
		exit(1);
	}
	if (mysql_query(con, "show databases")) {
		fprintf(stderr, "conn error: %s\n", mysql_error(con));
		mysql_close(con);
		exit(1);
	}
	MYSQL_RES* result = mysql_use_result(con);
	MYSQL_ROW result_row;
	while ((result_row = mysql_fetch_row(result)) != NULL) {
		printf("%s\n", *result_row);
	}
	mysql_free_result(result);
	mysql_close(con);
	return 0;
}
