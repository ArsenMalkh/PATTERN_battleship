#pragma once
#include "Unit_Pirate.h"


class Factory_Pirate {
public:
    virtual Unit_Pirate *Create() = 0;

    virtual ~Factory_Pirate() = default;
};

class Pirate_Boat_factory : public Factory_Pirate {
public:
    Unit_Pirate *Create() override {
        return new Pirate_Boat;
    }
};

class Pirate_Ship_factory : public Factory_Pirate {
public:
    Unit_Pirate *Create() override {
        return new Pirate_Ship;
    }
};

class Pirate_Submarine_factory : public Factory_Pirate {
public:
    Unit_Pirate *Create() override {
        return new Pirate_Submarine;
    }
};
