#include "army_tools.hpp"
#include "Unit_Pirate.h"
#include "Unit_Man.h"
#include "Factory_Of_Pirate.hpp"
#include "Factory_Of_Man.hpp"
#include "composite_unit.hpp"
#include "Army_builder.hpp"

class Enemy {
public:
    Enemy() {
        Man_army_builder men_army;
        sea_warrior = dir.createArmy(men_army, 1000, 1000, 1000);
    }

    int get_power_army(){
        return sea_warrior->get_power_attack();
    }

private:
    Director dir;
    Army* sea_warrior;
};