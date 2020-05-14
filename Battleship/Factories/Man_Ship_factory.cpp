#include "Unit_Man.h"
#include "Man_Boat.h"
#include "Man_Ship.h"
#include "Man_Submarine.h"
#include "Factory_Of_Man.h"
#include "Man_Ship_factory.h"

Unit_of_Man* Man_Ship_factory::Create(){
    return new Man_Ship;
}