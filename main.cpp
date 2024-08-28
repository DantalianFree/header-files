#include "health.hpp"
#include <iostream>

class health;

int main() {
    //point object refers to the points of health.
    health point;
    //declare points or value to maxHealth and health.
    point.maxHealth = 20; 
    point.health = 20;
    //display attributes declared.
    std::cout << point.maxHealth << std::endl;
    std::cout << point.health << std::endl;

    return 0;
}
