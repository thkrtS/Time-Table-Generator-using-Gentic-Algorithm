#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

int main(int argc, char **argv) {
	MYSQL* con = mysql_init(NULL);
	if (con == NULL) {
		fprintf(stderr, "connection error: %s\n", mysql_error(con));
		exit(1);
	}
	if (mysql_real_connect(con, "127.0.0.1", "", "", NULL, 0, NULL, 0) == NULL) {
		fprintf(stderr, "conn error: %s\n", mysql_error(con));
		mysql_close(con);
		exit(1);
	}
	if (mysql_query(con, "create database testcdb")) {
		fprintf(stderr, "database creation error: %s\n", mysql_error(con));
		exit(1);
	}
	mysql_close(con);
	return 0;
}
