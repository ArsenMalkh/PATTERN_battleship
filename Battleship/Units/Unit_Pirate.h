#pragma once
#include <iostream>
#include <assert.h>
using namespace std;


class Unit_of_Pirate {
public:
    virtual void info() = 0;

    virtual void attack() = 0;

    virtual void defend() = 0;

    virtual int getStrength() = 0;

    virtual void addUnit(Unit_of_Pirate* p){};

    virtual ~Unit_of_Pirate() = default;

};