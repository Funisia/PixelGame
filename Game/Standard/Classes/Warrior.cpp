#include <iostream>
#include "Types.h"
#include "Human.h"

class Warrior : public Human {
public:
    Warrior() : Human(10, 20, 20, 10) {};

    virtual ~Warrior() {}

    virtual void performAttack () override {
        // Warrior Attack Logic
    }

    virtual void performDefend () override {
        // Warrior Defend Logic
    }

    virtual void performHeal () override {
        // Warrior Heal logic
    }




};