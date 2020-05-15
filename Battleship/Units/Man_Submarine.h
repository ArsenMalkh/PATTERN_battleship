#pragma once

#include <iostream>
#include <assert.h>
#include "Unit_Man.h"
using namespace std;

class Man_Submarine : public Unit_of_Man {
public:
    void info() override;

    void attack() override;

    void defend() override;

    virtual int getStrength();
};
