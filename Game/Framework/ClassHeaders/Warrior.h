#ifndef WARRIOR_H
#define WARRIOR_H

#include "../Human.h"

class Warrior : public Human {
public:
    
    Warrior();
    virtual ~Warrior() {}
    void performAttack() override;
    void performDefend() override;
    void performHeal() override;

    
};

#endif 
