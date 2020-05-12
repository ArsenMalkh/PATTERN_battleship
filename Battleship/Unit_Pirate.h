#include <iostream>
#include <assert.h>

#pragma once

using namespace std;


class Unit_Pirate {
public:
    virtual void info() = 0;

    virtual void attack() = 0;

    virtual void defend() = 0;

    virtual int getStrength() = 0;

    virtual void addUnit(Unit_Pirate* p) {
        assert( false);
    }

    virtual ~Unit_Pirate() = default;

};

class Pirate_Boat : public Unit_Pirate {
public:
    void info() override {
        cout << "  This is Pirate_Boat" << endl;
    }

    void attack() override {
        cout << "Pirate_Boat attacking in closely battle!" << endl;
    }

    void defend() override {
        cout << "Pirate_Boat defend!" << endl;
    }

    virtual int getStrength() {
        return 1;
    }

};

class Pirate_Ship : public Unit_Pirate {
public:
    void info() override {
        cout << "  This is Pirate_Ship" << endl;
    }

    void attack() override {
        cout << "Pirate_Ship attacking in a long battle!" << endl;
    }

    void defend() override {
        cout << "Pirate_Ship defend!" << endl;
    }

    virtual int getStrength() {
        return 3;
    }
};

class Pirate_Submarine : public Unit_Pirate {
public:
    void info() override {
        cout << "  This is Pirate_Submarine" << endl;
    }

    void attack() override {
        cout << "Pirate_Submarine attacking in a long battle!" << endl;
    }

    void defend() override {
        cout << "Pirate_Submarine defend!" << endl;
    }

    virtual int getStrength() {
        return 5;
    }
};
