#include <iostream>
#include <assert.h>
#include "Unit_Pirate.h"
#include "Pirate_Boat.h"
using namespace std;

void Pirate_Boat::info(){
    cout << "  This is Pirate_Boat" << endl;
}

void Pirate_Boat::attack(){
    cout << "Pirate_Boat attacking in closely battle!" << endl;
}

void Pirate_Boat::defend(){
    cout << "Pirate_Boat defend!" << endl;
}

int Pirate_Boat::getStrength() {
    return 1;
}