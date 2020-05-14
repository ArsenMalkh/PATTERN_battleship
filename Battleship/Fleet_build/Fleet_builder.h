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
using namespace std;



class Fleet_builder {
protected:
    Fleet *p;
public:
    Fleet_builder();

    virtual void createFleet();

    virtual void build_Pirate_Boat(int number_unit_Pirate);

    virtual void build_Pirate_Ship(int number_unit_Pirate);

    virtual void build_Pirate_Submarine(int number_unit_Pirate);

    virtual void build_Man_Boat(int number_unit_Man);

    virtual void build_Man_Ship(int number_unit_Man);

    virtual void build_Man_Submarine(int number_unit_Man);

    virtual string get_race();

    virtual Fleet *getFleet();
};