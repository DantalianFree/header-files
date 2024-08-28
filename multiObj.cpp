//multiple objects for class
#include <iostream>
#include "health.hpp"

class health;

int main() {
    //first object
    health myObj1;
    myObj1.maxHealth = 10;
    myObj1.health = 10;

    //second object
    health myObj2;
    myObj2.maxHealth = 20;
    myObj2.health = 20;

    //display objects
    std::cout << "health: " << myObj1.health << " max health: " << myObj1.maxHealth << std::endl;
    std::cout << "health: " << myObj2.health << " max health: " << myObj2.maxHealth << std::endl;
}