#include <iostream>
#include <assert.h>
#include "Unit_Pirate.h"
#include "Pirate_Ship.h"
using namespace std;

void Pirate_Ship::info(){
    cout << "  This is Pirate_Ship" << endl;
}

void Pirate_Ship::attack(){
    cout << "Pirate_Ship attacking in long battle!" << endl;
}

void Pirate_Ship::defend(){
    cout << "Pirate_Ship defend!" << endl;
}

int Pirate_Ship::getStrength() {
    return 3;
}