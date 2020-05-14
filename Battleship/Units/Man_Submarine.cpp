#include <iostream>
#include <assert.h>
#include "Unit_Man.h"
#include "Man_Submarine.h"
using namespace std;

void Man_Submarine::info(){
    cout << "  This is Man_Submarine" << endl;
}

void Man_Submarine::attack(){
    cout << "Man_Submarine attacking in long battle!" << endl;
}

void Man_Submarine::defend(){
    cout << "Man_Submarine defend!" << endl;
}

int Man_Submarine::getStrength() {
    return 5;
}