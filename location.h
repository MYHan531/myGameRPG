// location.h
#pragma once

#include <string>

// Struct to represent a location
struct Location {
    std::string name;
    std::string description;
    bool hasItem;
    bool hasEnemy;
    int enemySpawnRate;

    Location(const std::string& name, const std::string& description, bool hasItem, bool hasEnemy, int enemySpawnRate);
};

// Define the game world using a 2D vector
extern const int ROWS;
extern const int COLS;
extern std::vector<std::vector<Location>> gameWorld;
