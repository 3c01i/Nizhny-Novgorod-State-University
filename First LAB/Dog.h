#pragma once
#include "MilckAnimals.h"

class Dog : public MilckAnimals {
protected:
    Eating eda;
public:
    Eating GetEda();
    void SetEda(Eating eda);
};