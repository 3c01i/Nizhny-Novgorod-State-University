#pragma once
#include "Animals.h"

class ColdAnimals : public Animals {
protected:
    int eat;
public:
    int GetEat();
    void SetEat(int eat);
};