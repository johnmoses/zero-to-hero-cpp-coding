/*
Database programming with sqlite3
*/
#include <iostream>
#include <sqlite3.h>
#include <string>

using namespace std;

int main(int argc, char **argv) {
  sqlite3 *db;
  char *zErrMsg = 0;
  int rc;
  const char *sql;

  rc = sqlite3_open("test.db", &db);

  if (rc) {
    cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
    return 0;
  } else {
    cout << "Opened database successfully" << endl;
  }

  sql = "CREATE TABLE COMPANY(" \
        "ID INT PRIMARY KEY     NOT NULL," \
        "NAME           TEXT    NOT NULL," \
        "AGE            INT     NOT NULL," \
        "ADDRESS        CHAR(50)," \
        "SALARY         REAL );";

  rc = sqlite3_exec(db, sql, NULL, 0, &zErrMsg);

  if (rc != SQLITE_OK) {
    cout << "SQL error: " << zErrMsg << endl;
    sqlite3_free(zErrMsg);
  } else {
    cout << "Table created successfully" << endl;
  }

  sqlite3_close(db);
  return 0;
}

/*
Output:
Opened database successfully
Table created successfully
*/

/*
To compile:
g++ intro.cc -lsqlite3
*/

/*
To run:
./a.out
*/
