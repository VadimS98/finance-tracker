set(UTILS_SOURCES JSONHandler.cpp Logger.cpp)

# Create a library for utility functions
add_library(utils ${UTILS_SOURCES})

# Link JSON library for handling JSON files
target_link_libraries(utils nlohmann_json)
