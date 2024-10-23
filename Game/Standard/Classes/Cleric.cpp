#include <iostream>
#include "Types.h"
#include "Human.h"

class Cleric : public Human {
public:
    Cleric() : Human(10, 20, 20, 10) {};

    virtual ~Cleric() {}

    virtual void performAttack () override {
        // Cleric Attack Logic
    }

    virtual void performDefend () override {
        // Cleric Defend Logic
    }

    virtual void performHeal () override {
        // Cleric Heal logic
    }
    
};