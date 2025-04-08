cmake_minimum_required(VERSION 3.15)
project(PersonalFinanceTracker)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define source directory
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")

# Add source files for the database module
set(DATABASE_SOURCES ${SRC_DIR}/database/Database.cpp ${SRC_DIR}/database/Database.h)

# Include all source files in the build
set(SOURCES ${SRC_DIR}/main.cpp ${DATABASE_SOURCES})

# Add executable target
add_executable(${PROJECT_NAME} ${SOURCES})

# Link SQLite library
target_link_libraries(${PROJECT_NAME} sqlite3)
