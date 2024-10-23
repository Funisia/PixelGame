#include <iostream>
#include "Types.h"
#include "Human.h"

class Mage : public Human {
public:
    Mage() : Human(10, 20, 20, 10) {};

    virtual ~Mage() {}

    virtual void performAttack () override {
        // Mage Attack Logic
    }

    virtual void performDefend () override {
        // Mage Defend Logic
    }

    virtual void performHeal () override {
        // Mage Heal logic
    }



};