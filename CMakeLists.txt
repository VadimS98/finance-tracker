cmake_minimum_required(VERSION 3.15)
project(FinanceTracker)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories for modules
add_subdirectory(bot)
add_subdirectory(server)
add_subdirectory(utils)
add_subdirectory(tests)

# Include third-party libraries (e.g., Telegram Bot API, JSON handling)
include_directories(third_party/tgbot-cpp/include)
include_directories(third_party/nlohmann-json/include)

# Output binaries to the build/ folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
