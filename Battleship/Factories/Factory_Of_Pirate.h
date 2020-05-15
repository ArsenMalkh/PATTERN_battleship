#pragma once
#include "Unit_Pirate.h"
#include "Pirate_Boat.h"
#include "Pirate_Ship.h"
#include "Pirate_Submarine.h"

class Factory_Pirate {
public:
    virtual Unit_of_Pirate *Create() = 0;

    virtual ~Factory_Pirate() = default;
};

