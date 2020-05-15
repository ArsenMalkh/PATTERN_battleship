#include "Unit_Pirate.h"
#include "Pirate_Boat.h"
#include "Pirate_Ship.h"
#include "Pirate_Submarine.h"
#include "Factory_Of_Pirate.h"
#include "Pirate_Boat_factory.h"


Unit_of_Pirate* Pirate_Boat_factory::Create(){
    return new Pirate_Boat;
}