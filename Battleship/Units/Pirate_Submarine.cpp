#include <iostream>
#include <assert.h>
#include "Unit_Pirate.h"
#include "Pirate_Submarine.h"
using namespace std;

void Pirate_Submarine::info(){
    cout << "  This is Pirate_Submarine" << endl;
}

void Pirate_Submarine::attack(){
    cout << "Pirate_Submarine attacking in long battle!" << endl;
}

void Pirate_Submarine::defend(){
    cout << "Pirate_Submarine defend!" << endl;
}

int Pirate_Submarine::getStrength() {
    return 5;
}