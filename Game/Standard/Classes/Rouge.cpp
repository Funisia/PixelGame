#include <iostream>
#include "Types.h"
#include "Human.h"

class Rogue : public Human {
public: 
    Rogue() : Human(10, 20, 20, 10) {};

    virtual ~Rogue() {}

    virtual void performAttack () override {
        // Rogue Attack Logic
    }

    virtual void performDefend () override {
        // Rogue Defend Logic
    }

    virtual void performHeal () override {
        // Rogue Heal logic
    }




};