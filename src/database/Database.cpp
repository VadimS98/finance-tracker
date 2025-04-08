#include "Database.h"
#include <iostream>

Database::Database() : db(nullptr) {}

Database::~Database() {
    disconnect(); // Ensure the database connection is closed
}

bool Database::connect(const std::string& dbName) {
    int rc = sqlite3_open(dbName.c_str(), &db);
    if (rc) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }
    std::cout << "Connected to database successfully!" << std::endl;
    return true;
}

void Database::disconnect() {
    if (db) {
        sqlite3_close(db);
        db = nullptr;
        std::cout << "Disconnected from database." << std::endl;
    }
}

bool Database::executeQuery(const std::string& query) {
    char* errorMessage = nullptr;
    int rc = sqlite3_exec(db, query.c_str(), nullptr, nullptr, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
        return false;
    }
    return true;
}
