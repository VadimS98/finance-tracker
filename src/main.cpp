#include <iostream>
#include "database/Database.h"

int main() {
    std::cout << "Welcome to Personal Finance Tracker!" << std::endl;

    // Create a Database instance and connect to SQLite database
    Database db;
    if (db.connect("finance_tracker.db")) {
        // Insert a sample expense
        if (db.insertExpense("Coffee", 4.99, "2025-04-08")) {
            std::cout << "Expense inserted successfully!" << std::endl;
        } else {
            std::cerr << "Failed to insert expense." << std::endl;
        }

        db.disconnect();
    }

    return 0;
}
