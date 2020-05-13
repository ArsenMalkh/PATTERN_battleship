#include "Fleet_tools.hpp"
#include "Unit_Pirate.h"
#include "Unit_Man.h"
#include "Factory_Of_Pirate.hpp"
#include "Factory_Of_Man.hpp"
#include "composite_unit.hpp"
#include "Fleet_builder.hpp"

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
    Director dir;
    Fleet* sea_warrior;
};