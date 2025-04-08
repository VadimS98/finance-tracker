#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <sqlite3.h>

class Database {
private:
    sqlite3* db; // Pointer to SQLite database connection

public:
    Database();
    ~Database();

    bool connect(const std::string& dbName);
    void disconnect();
    bool executeQuery(const std::string& query);
};

#endif // DATABASE_H
