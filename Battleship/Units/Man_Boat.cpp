#include <iostream>
#include <assert.h>
#include "Unit_Man.h"
#include "Man_Boat.h"
using namespace std;

void Man_Boat::info(){
    cout << "  This is Man_Boat" << endl;
}

void Man_Boat::attack(){
    cout << "Man_Boat attacking in closely battle!" << endl;
}

void Man_Boat::defend(){
    cout << "Man_Boat defend!" << endl;
}

int Man_Boat::getStrength() {
    return 1;
}