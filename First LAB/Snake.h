#pragma once
#include "ColdAnimals.h"

class Snake : public ColdAnimals {
protected:
    float lenght;
public:
    float GetLenght();
    void SetLenght(float lenght);
};