#include "characters.cpp"

int main() {
    Player player("Hero", 100, 20, 10);
    Enemy enemy("Goblin", 50, 10, 5);

    while (player.isAlive() && enemy.isAlive()) {
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
