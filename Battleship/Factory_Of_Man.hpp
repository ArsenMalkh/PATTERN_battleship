#include "Unit_Man.h"
#pragma once

// Фабрика эльфов
class Factory_Man {
public:
    virtual Unit_of_Man *Create() = 0;

    virtual ~Factory_Man() = default;
};

class Man_Boat_factory : public Factory_Man {
public:
    Unit_of_Man *Create() override {
        return new Man_Boat;
    }
};

class Man_Ship_factory : public Factory_Man {
public:
    Unit_of_Man *Create() override {
        return new Man_Ship;
    }
};

class Man_Submarine_factory : public Factory_Man {
public:
    Unit_of_Man *Create() override {
        return new Man_Submarine;
    }
};
