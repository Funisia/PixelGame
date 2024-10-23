#ifndef HUMAN_H
#define HUMAN_H
#include "Types.h"

// Responsibilities
// 1. Know/Return Base HP, MP, DEF, and ATK
// 2. Declare functions that all classes share

// Human Abstract Class
class Human {
public:

    Human(HP Health, MP Magic, DEF Defense, ATK Attack) 
    : BaseHealth(Health), BaseMagic(Magic), BaseDefense(Defense), BaseAttack(Attack) {}

    virtual ~Human() {}

    virtual void performAttack () = 0;
    virtual void performDefend () = 0;
    virtual void performHeal () = 0;

    HP getBaseHealth () const { return BaseHealth; }
    HP getCurrentHealth ()  { return CurrentHealth; }
    MP getBaseMagic () const { return BaseMagic; }
    MP getCurrentMagic ()  { return CurrentMagic; }
    DEF getBaseDefense () const { return BaseDefense; }
    DEF getCurrentDefense ()  { return CurrentDefense; }
    ATK getBaseAttack () const { return BaseAttack; }
    ATK getCurrentAttack () { return CurrentAttack; }

protected:

    HP BaseHealth;
    HP CurrentHealth;
    MP BaseMagic;
    MP CurrentMagic;
    DEF BaseDefense;
    DEF CurrentDefense;
    ATK BaseAttack;
    ATK CurrentAttack;


};





#endif
