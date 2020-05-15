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
#include "Pirate_Fleet_builder.h"
#include "Man_Fleet_builder.h"
#include "Head.h"
using namespace std;

Fleet* Head::createFleet(Fleet_builder &builder, int number_Boat,
                    int number_Ship, int number_Submarine) {

    builder.createFleet();            
    builder.build_Pirate_Boat(number_Boat);
    builder.build_Pirate_Ship(number_Ship);
    builder.build_Pirate_Submarine(number_Submarine);

    builder.build_Man_Boat(number_Boat);
    builder.build_Man_Ship(number_Ship);
    builder.build_Man_Submarine(number_Submarine);
    return (builder.getFleet());
}