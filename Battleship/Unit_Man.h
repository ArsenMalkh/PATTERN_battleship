#include <iostream>
#include <assert.h>
#pragma once

using namespace std;

// Юниты эльфов
class Unit_of_Man {
public:
    virtual void info() = 0;

    virtual void attack() = 0;

    virtual void defend() = 0;

    virtual int getStrength() = 0;

    virtual void addUnit(Unit_of_Man* p) {
        assert( false);
    }

    virtual ~Unit_of_Man() = default;

};

class Man_Boat : public Unit_of_Man {
public:
    void info() override {
        cout << "  This is Man_Boat" << endl;
    }

    void attack() override {
        cout << "Man_Boat attacking in closely battle!" << endl;
    }

    void defend() override {
        cout << "Man_Boat defend!" << endl;
    }

    virtual int getStrength() {
        return 1;
    }

};

class Man_Ship : public Unit_of_Man {
public:
    void info() override {
        cout << "  This is Man_Ship" << endl;
    }

    void attack() override {
        cout << "Man_Ship attacking in a long battle!" << endl;
    }

    void defend() override {
        cout << "Man_Ship defend!" << endl;
    }

    virtual int getStrength() {
        return 3;
    }
};

class Man_Submarine : public Unit_of_Man {
public:
    void info() override {
        cout << "  This is Man_Submarine" << endl;
    }

    void attack() override {
        cout << "Man_Submarine attacking in a long battle!" << endl;
    }

    void defend() override {
        cout << "Man_Submarine defend!" << endl;
    }

    virtual int getStrength() {
        return 5;
    }
};