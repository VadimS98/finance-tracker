# Finance Tracker with Telegram Bot Integration

## Overview
A C++ application for managing personal finances with a Telegram bot interface. The project uses multithreading, database management, and networking.

## Features
- Add expenses/incomes via Telegram bot commands.
- Store data in a database (SQLite/PostgreSQL).
- Export reports in JSON format.
- Fetch real-time currency exchange rates.

## Folder Structure
- `bot/`: Telegram bot-related code.
- `server/`: Core server logic and database handling.
- `utils/`: Utility functions like JSON handling and logging.
- `tests/`: Unit and integration tests.
- `third_party/`: Third-party libraries.
- `build/`: Compiled binaries and build artifacts.

## Getting Started
1. Clone the repository.
2. Set up dependencies using vcpkg.
3. Build the project using CMake.
4. Run the server and bot.

## License
TBD
