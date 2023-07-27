#include "character.cpp"
#include "location.h"
#include "world.h"
#include <iostream>
#include <string>
#include <vector>

const int ROWS = 3;
const int COLS = 3;
std::vector<std::vector<Location>> gameWorld(ROWS, std::vector<Location>(COLS, Location("", "", false, false, 0)));


int main()
{
    setupGameWorld();

    int currentRow = 0;
    int currentCol = 0;

    while (true) {
        displayLocationInfo(currentRow, currentCol);
        // ... (remaining code, same as before)
    }
    Player player("Hero", 100, 20, 10);
    Enemy enemy("Goblin", 50, 10, 5);

    while (player.isAlive() && enemy.isAlive())
    {
        player.displayStats();
        enemy.displayStats();

        int playerDamage = player.attack(enemy);
        if (!enemy.isAlive())
            break;

        int enemyDamage = enemy.attack(player);
        if (!player.isAlive())
            break;

        std::cout << std::endl;
    }

    if (player.isAlive())
        std::cout << "Congratulations! You defeated the enemy!" << std::endl;
    else
        std::cout << "Game Over! You were defeated by the enemy." << std::endl;

    return 0;
}
