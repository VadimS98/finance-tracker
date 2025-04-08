set(BOT_SOURCES BotHandler.cpp TelegramAPI.cpp)

# Create a library for bot-related code
add_library(bot ${BOT_SOURCES})

# Link required third-party libraries (e.g., tgbot-cpp, nlohmann-json)
target_link_libraries(bot tgbot-cpp nlohmann_json)
