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


Fleet_builder::Fleet_builder() : p(nullptr) {}

void Fleet_builder::createFleet() {}

void Fleet_builder::build_Pirate_Boat(int number_unit_Pirate) {}

void Fleet_builder::build_Pirate_Ship(int number_unit_Pirate) {}

void Fleet_builder::build_Pirate_Submarine(int number_unit_Pirate) {}


void Fleet_builder::build_Man_Boat(int number_unit_Man) {}

void Fleet_builder::build_Man_Ship(int number_unit_Man) {}

void Fleet_builder::build_Man_Submarine(int number_unit_Man) {}

string Fleet_builder::get_race() {}

Fleet* Fleet_builder::getFleet() {
    return p;
}