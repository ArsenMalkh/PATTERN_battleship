#pragma once
#include <vector>
#include "Unit_Pirate.h"
#include "Unit_Man.h"
#include "Man_Boat.h"
#include "Man_Ship.h"
#include "Man_Submarine.h"
#include "Pirate_Boat.h"
#include "Pirate_Ship.h"
#include "Pirate_Submarine.h"
#include "Fleet.h"
#include "Fleet_builder.h"
using namespace std;


class Head {
public:
    Fleet *createFleet(Fleet_builder &builder, int number_Boat,
                     int number_Ship, int number_Submarine);
};