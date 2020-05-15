#include "Fleet_tools.hpp"
#include "Unit_Pirate.h"
#include "Unit_Man.h"
#include "Man_Boat.h"
#include "Man_Ship.h"
#include "Man_Submarine.h"
#include "Pirate_Boat.h"
#include "Pirate_Ship.h"
#include "Pirate_Submarine.h"
#include "Factory_Of_Pirate.h"
#include "Factory_Of_Man.h"
#include "Factory_Of_Man.h"
#include "Factory_Of_Pirate.h"
#include "Man_Boat_factory.h"
#include "Man_Ship_factory.h"
#include "Man_Submarine_factory.h"
#include "Pirate_Boat_factory.h"
#include "Pirate_Ship_factory.h"
#include "Pirate_Submarine_factory.h"
#include "Composite_Unit_of_Man.h"
#include "Composite_Unit_of_Pirate.h"
#include "Fleet.h"
#include "Fleet_builder.h"
#include "Head.h"
#include "Man_Fleet_builder.h"
#include "Pirate_Fleet_builder.h"

class Enemy {
public:
    Enemy() {
        Man_Fleet_builder men_Fleet;
        sea_warrior = dir.createFleet(men_Fleet, 1000, 1000, 1000);
    }

    int get_power_Fleet(){
        return sea_warrior->get_power_attack();
    }

private:
    Head dir;
    Fleet* sea_warrior;
};