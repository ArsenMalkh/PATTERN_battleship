#include <vector>
#include "Pirate_Fleet_builder.h"
using namespace std;


void Pirate_Fleet_builder::createFleet(){ p = new Fleet;}

void Pirate_Fleet_builder::build_Pirate_Boat(int number_unit_Pirate){
        
    for (int i = 0; i < number_unit_Pirate; i++){
        p->vector_Pirate_Boat.emplace_back(Pirate_Boat());
        p->Vector_Pirate.push_back(new Pirate_Boat());
    }
}

void Pirate_Fleet_builder::build_Pirate_Ship(int number_unit_Pirate) {
    for (int i = 0; i < number_unit_Pirate; i++){
        p->vector_Pirate_Ship.emplace_back(Pirate_Ship());
        p->Vector_Pirate.push_back(new Pirate_Ship());
    }
}

void Pirate_Fleet_builder::build_Pirate_Submarine(int number_unit_Pirate) {
    for (int i = 0; i < number_unit_Pirate; i++){
        p->vector_Pirate_Submarine.emplace_back(Pirate_Submarine());
        p->Vector_Pirate.push_back(new Pirate_Submarine());
    }
}

string Pirate_Fleet_builder::Pirate_Fleet_builder::get_race() {
    return "Pirate";
}