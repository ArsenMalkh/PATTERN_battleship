#pragma once
#include "Unit_Man.h"
#include "Man_Boat.h"
#include "Man_Ship.h"
#include "Man_Submarine.h"

class Factory_Man {
public:
    virtual Unit_of_Man *Create() = 0;

    virtual ~Factory_Man() = default;
};

