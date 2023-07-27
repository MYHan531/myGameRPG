// location.cpp
#include "location.h"

Location::Location(const std::string& name, const std::string& description, bool hasItem, bool hasEnemy, int enemySpawnRate)
    : name(name), description(description), hasItem(hasItem), hasEnemy(hasEnemy), enemySpawnRate(enemySpawnRate) {}
