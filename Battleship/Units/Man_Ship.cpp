#include <iostream>
#include <assert.h>
#include "Unit_Man.h"
#include "Man_Ship.h"
using namespace std;

void Man_Ship::info(){
    cout << "  This is Man_Ship" << endl;
}

void Man_Ship::attack(){
    cout << "Man_Ship attacking in long battle!" << endl;
}

void Man_Ship::defend(){
    cout << "Man_Ship defend!" << endl;
}

int Man_Ship::getStrength() {
    return 3;
}