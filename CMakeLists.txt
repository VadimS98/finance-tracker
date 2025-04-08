cmake_minimum_required(VERSION 3.15)
project(PersonalFinanceTracker)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define project directories for source and headers
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
set(LIB_DIR "${PROJECT_SOURCE_DIR}/lib")

# Include directories for headers
include_directories(${INCLUDE_DIR})

# Find external libraries using vcpkg or system paths
find_package(tgbot-cpp REQUIRED)       # Telegram bot library
find_package(nlohmann_json REQUIRED)   # JSON library
find_package(SQLite3 REQUIRED)         # SQLite database library

# Group source files by functionality for clarity in CMakeLists.txt
set(BOT_SOURCES 
    ${SRC_DIR}/bot/TelegramBot.cpp 
    ${SRC_DIR}/bot/TelegramBot.h)

set(SERVER_SOURCES 
    ${SRC_DIR}/server/Server.cpp 
    ${SRC_DIR}/server/Server.h)

set(DATABASE_SOURCES 
    ${SRC_DIR}/database/Database.cpp 
    ${SRC_DIR}/database/Database.h)

set(MULTITHREADING_SOURCES 
    ${SRC_DIR}/multithreading/Multithreading.cpp 
    ${SRC_DIR}/multithreading/Multithreading.h)

set(NETWORKING_SOURCES 
    ${SRC_DIR}/networking/Networking.cpp 
    ${SRC_DIR}/networking/Networking.h)

# Add main source file separately
set(MAIN_SOURCE ${SRC_DIR}/main.cpp)

# Combine all source files into a single list for compilation
set(ALL_SOURCES 
    ${BOT_SOURCES} 
    ${SERVER_SOURCES} 
    ${DATABASE_SOURCES} 
    ${MULTITHREADING_SOURCES} 
    ${NETWORKING_SOURCES} 
    ${MAIN_SOURCE})

# Add executable target for the project
add_executable(${PROJECT_NAME} ${ALL_SOURCES})

# Link external libraries to the project executable
target_link_libraries(${PROJECT_NAME} tgbot nlohmann_json SQLite3)

# Set output directory for build artifacts
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build")
