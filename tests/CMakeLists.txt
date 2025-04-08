set(TEST_SOURCES test_bot.cpp test_server.cpp test_utils.cpp)

# Create an executable for running tests
add_executable(tests ${TEST_SOURCES})

# Link all modules (bot, server, utils) and third-party libraries for testing
target_link_libraries(tests bot server utils tgbot-cpp nlohmann_json Boost::thread Boost::system SQLite3)
