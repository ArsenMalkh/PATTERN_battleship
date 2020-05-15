#pragma once
#include "Unit_Man.h"
#include "Man_Boat.h"
#include "Man_Ship.h"
#include "Man_Submarine.h"
#include "Factory_Of_Man.h"

class Man_Boat_factory : public Factory_Man {
public:
    Unit_of_Man *Create() override;
};