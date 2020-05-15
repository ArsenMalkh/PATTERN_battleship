#include <vector>
#include "Man_Fleet_builder.h"
using namespace std;


void Man_Fleet_builder::createFleet(){ p = new Fleet;}

void Man_Fleet_builder::build_Man_Boat(int number_unit_Man){
        
    for (int i = 0; i < number_unit_Man; i++){
        p->vector_Man_Boat.emplace_back(Man_Boat());
        p->Vector_Man.push_back(new Man_Boat());
    }
}

void Man_Fleet_builder::build_Man_Ship(int number_unit_Man) {
    for (int i = 0; i < number_unit_Man; i++){
        p->vector_Man_Ship.emplace_back(Man_Ship());
        p->Vector_Man.push_back(new Man_Ship());
    }
}

void Man_Fleet_builder::build_Man_Submarine(int number_unit_Man) {
    for (int i = 0; i < number_unit_Man; i++){
        p->vector_Man_Submarine.emplace_back(Man_Submarine());
        p->Vector_Man.push_back(new Man_Submarine());
    }
}

string Man_Fleet_builder::Man_Fleet_builder::get_race() {
    return "Man";
}