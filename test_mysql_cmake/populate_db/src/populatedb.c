#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql/mysql.h>

struct ConDetails {
	char* server;
	char* user;
	char* password;
	char* database;
};

void finish_with_error(MYSQL* con);

void take_inputs(struct ConDetails* mydetail);

int main(int argc, char **argv) {
	printf("first\n");
	MYSQL* con = mysql_init(NULL);
	struct ConDetails detail;
	if (con == NULL) {
		fprintf(stderr, "%s\n", mysql_error(con));
		exit(1);
	}
	printf("second\n");
	take_inputs(&detail);
	if (mysql_real_connect(con, detail.server, detail.user, detail.password, detail.database, 0, NULL, 0) == NULL) {
		finish_with_error(con);
	}
	if (mysql_query(con, "drop table if exists cars")) {
		finish_with_error(con);
	}
	if (mysql_query(con, "create table cars(id int primary key auto_increment, name varchar(255), price int)")) {
		finish_with_error(con);
	}
	if (mysql_query(con, "insert into cars values(1, 'Audi', 593004)")) {
		finish_with_error(con);
	}
	if (mysql_query(con, "insert into cars values(2, 'BMW', 3904320)")) {
		finish_with_error(con);
	}
	if (mysql_query(con, "insert into cars values(3, 'Ford', 9823434)")) {
		finish_with_error(con);
	}
	if (mysql_query(con, "insert into cars values(4, 'Dodge', 3948294)")) {
		finish_with_error(con);
	}
	if (mysql_query(con, "insert into cars values(5, 'Ferrari', 348093248)")) {
		finish_with_error(con);
	}
	if (mysql_query(con, "insert into cars values(6, 'Plymoth', 3849934)")) {
		finish_with_error(con);
	}
	mysql_close(con);
	return 0;
}

void finish_with_error(MYSQL* con) {
	fprintf (stderr, "%s\n", mysql_error(con));
	mysql_close(con);
	exit(1);
}

void take_inputs(struct ConDetails* mydetail) {
	printf("reached here\n");
	mydetail->server = (char*)malloc(256 * sizeof(char));
	mydetail->user = (char*)malloc(256 * sizeof(char));
	mydetail->password = (char*)malloc(256 * sizeof(char));
	mydetail->database = (char*)malloc(256 * sizeof(char));
	printf("Enter server(if not 127.0.0.1 will be used)");
	fgets(mydetail->server, sizeof(mydetail->server), stdin);
	if (*(mydetail->server) == '\n') {
		printf("Using '127.0.0.1' for server\n");
		strncpy(mydetail->server, "127.0.0.1", 11);
	}
	printf("Enter user: ");
	scanf("%s", mydetail->user);
	printf("Enter password: ");
	scanf("%s", mydetail->password);
	printf("Enter database: ");
	scanf("%s", mydetail->database);
}
