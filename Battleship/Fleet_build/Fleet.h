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
using namespace std;


class Fleet {
public:
    vector<Pirate_Boat> vector_Pirate_Boat;
    vector<Pirate_Ship> vector_Pirate_Ship;
    vector<Pirate_Submarine> vector_Pirate_Submarine;
    vector<Unit_of_Pirate*> Vector_Pirate;
    vector<Man_Boat> vector_Man_Boat;
    vector<Man_Ship> vector_Man_Ship;
    vector<Man_Submarine> vector_Man_Submarine;
    vector<Unit_of_Man*> Vector_Man;


    int get_power_attack();

    vector<int> get_number_unit();

    string get_race();
};