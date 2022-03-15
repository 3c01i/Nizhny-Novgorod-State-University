#pragma once
#include "ColdAnimals.h"

class frog : public ColdAnimals {
protected:
    float jump;
    int jumpheight;
public:
    float GetJump();
    void SetJump(float jump);
    float GetJumpheight();
    void SetJumpheight(float jumpheight);
};