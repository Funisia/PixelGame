#include <iostream>
#include "../../Framework/Types/Types.h"
#include "../../Framework/Human.h"
#include "../../Framework/ClassHeaders/Warrior.h"

    Warrior::Warrior() : Human(10,20,20,10) {}

    void Warrior::performAttack ()  {
        // Warrior Attack Logic
        std::cout << "Warrior attacks!" << std::endl; // Placeholder logic
    }

    void Warrior::performDefend ()  {
        // Warrior Defend Logic
        std::cout << "Warrior attacks!" << std::endl; // Placeholder logic
    }

    void Warrior::performHeal ()  {
        // Warrior Heal logic
        std::cout << "Warrior heals!" << std::endl; // Placeholder logic
    }


