# Define source files for the server module
set(SERVER_SOURCES Server.cpp Database.cpp)

# Create a library for server-related code
add_library(server ${SERVER_SOURCES})

# Find and link SQLite3
find_package(SQLite3 REQUIRED)
include_directories(${SQLite3_INCLUDE_DIRS})
target_link_libraries(server ${SQLite3_LIBRARIES})

# Find and link Boost libraries (thread and system)
find_package(Boost REQUIRED COMPONENTS thread system)
include_directories(${Boost_INCLUDE_DIR})
target_link_libraries(server Boost::thread Boost::system)
