#pragma once
#include "Unit_Pirate.h"
#include "Pirate_Boat.h"
#include "Pirate_Ship.h"
#include "Pirate_Submarine.h"
#include "Factory_Of_Pirate.h"

class Pirate_Ship_factory : public Factory_Pirate {
public:
    Unit_of_Pirate *Create() override;
};