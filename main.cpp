#include "health.hpp"
#include <iostream>

class health;

int main() {
    //point
    health point;

    point.maxHealth = 20; 
    point.health = 20;

    std::cout << point.maxHealth << std::endl;
    std::cout << point.health << std::endl;

    return 0;
}
