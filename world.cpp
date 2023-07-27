// world.cpp
#include <iostream>
#include <vector>
#include "location.h"
#include "world.h"

void setupGameWorld() {
    gameWorld[0][0] = Location("Town", "Welcome to the town. You can rest and buy items here.", true, false, 0);
    gameWorld[0][1] = Location("Forest", "You are in a dense forest. Watch out for enemies!", true, true, 30);
    gameWorld[0][2] = Location("Cave", "Dark and mysterious cave lies ahead. Proceed with caution.", true, true, 50);
    // Add more locations as needed
}

void displayLocationInfo(int currentRow, int currentCol) {
    std::cout << "You are currently at " << gameWorld[currentRow][currentCol].name << "." << std::endl;
    std::cout << gameWorld[currentRow][currentCol].description << std::endl;

    if (gameWorld[currentRow][currentCol].hasItem)
        std::cout << "There is an item available here." << std::endl;

    if (gameWorld[currentRow][currentCol].hasEnemy)
        std::cout << "An enemy might be lurking nearby." << std::endl;

    std::cout << std::endl;
}
