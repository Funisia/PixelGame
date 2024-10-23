#include <iostream>
#include "../../Game/Framework/Types/Types.h"
#include "../../Game/Framework/Human.h"
#include "../../Game/Framework/ClassHeaders/Warrior.h"


int main() {
    // Your test code here
    Warrior warrior;

    if (warrior.getBaseHealth() == 10)
    {
        std::cout << "Test Passed: Base health is correct.\n";
    }
    //return 0;
}
