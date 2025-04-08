#include <iostream>
#include "database/Database.h"

int main() {
    std::cout << "Welcome to Personal Finance Tracker!" << std::endl;

    // Create a Database instance and connect to a file-based SQLite database
    Database db;
    if (db.connect("finance_tracker.db")) {
        // Create a sample table for expenses
        const std::string createTableQuery = R"(
            CREATE TABLE IF NOT EXISTS expenses (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                description TEXT NOT NULL,
                amount REAL NOT NULL,
                date TEXT NOT NULL
            );
        )";

        if (db.executeQuery(createTableQuery)) {
            std::cout << "Expenses table created successfully!" << std::endl;
        } else {
            std::cerr << "Failed to create expenses table." << std::endl;
        }

        db.disconnect();
    }

    return 0;
}
