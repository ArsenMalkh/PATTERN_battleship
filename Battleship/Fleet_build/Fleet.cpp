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


int Fleet::get_power_attack(){
    int result = 0;

    for (int i = 0; i < Vector_Man.size();i++)
            result += Vector_Man[i]->getStrength();
    for (int i = 0; i < Vector_Pirate.size();i++)
            result += Vector_Pirate[i]->getStrength();

    return result;
}

vector<int> Fleet::get_number_unit() {
    vector<int> number_unit(3);

    if (!vector_Pirate_Boat.empty()) {
        number_unit[0] = vector_Pirate_Boat.size();
    }
    if (!vector_Pirate_Ship.empty()) {
        number_unit[1] = vector_Pirate_Ship.size();
    }
    if (!vector_Pirate_Submarine.empty()) {
        number_unit[2] = vector_Pirate_Submarine.size();
    }

    if (!vector_Man_Boat.empty()) {
        number_unit[0] = vector_Man_Boat.size();
    }
    if (!vector_Man_Ship.empty()) {
        number_unit[1] = vector_Man_Ship.size();
    }
    if (!vector_Man_Submarine.empty()) {
        number_unit[2] = vector_Man_Submarine.size();
    }
    return number_unit;
}

string Fleet::get_race() {

    if (!vector_Pirate_Boat.empty()) {
        return "Pirate";
    }
    if (!vector_Pirate_Ship.empty()) {
        return "Pirate";
    }
    if (!vector_Pirate_Submarine.empty()) {
        return "Pirate";
    }

    if (!vector_Man_Boat.empty()) {
        return "Man";
    }
    if (!vector_Man_Ship.empty()) {
        return "Man";
    }
    if (!vector_Man_Submarine.empty()) {
        return "Man";
    }
    return "null";
}