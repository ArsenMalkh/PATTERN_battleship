#pragma once

#include <iostream>
#include <assert.h>
#include "Unit_Pirate.h"
using namespace std;

class Pirate_Boat : public Unit_of_Pirate {
public:
    void info() override;

    void attack() override;

    void defend() override ;

    virtual int getStrength();

};