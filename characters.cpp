#include <iostream>
#include <string>

class Character {
protected:
    std::string name;
    int maxHP;
    int currentHP;
    int attackPower;
    int defensePower;

public:
    Character(const std::string& name, int maxHP, int attackPower, int defensePower)
        : name(name), maxHP(maxHP), currentHP(maxHP), attackPower(attackPower), defensePower(defensePower) {}

    // Function to attack another character
    int attack(Character& target) {
        int damage = std::max(attackPower - target.defensePower, 0);
        target.takeDamage(damage);
        return damage;
    }

    // Function to take damage from an attacker
    void takeDamage(int damage) {
        currentHP = std::max(currentHP - damage, 0);
        std::cout << name << " takes " << damage << " damage. Current HP: " << currentHP << "/" << maxHP << std::endl;
    }

    // Function to check if the character is alive
    bool isAlive() const {
        return currentHP > 0;
    }

    // Function to display character information
    void displayStats() const {
        std::cout << "Name: " << name << ", HP: " << currentHP << "/" << maxHP
                  << ", Attack: " << attackPower << ", Defense: " << defensePower << std::endl;
    }
};

class Player : public Character {
public:
    Player(const std::string& name, int maxHP, int attackPower, int defensePower)
        : Character(name, maxHP, attackPower, defensePower) {}
};

class Enemy : public Character {
public:
    Enemy(const std::string& name, int maxHP, int attackPower, int defensePower)
        : Character(name, maxHP, attackPower, defensePower) {}
};
