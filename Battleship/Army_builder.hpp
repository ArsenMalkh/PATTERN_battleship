#include <vector>
#include "Unit_Pirate.h"
#include "Unit_Man.h"
#pragma once

class Army {
public:

    vector<Pirate_Boat> vector_Pirate_Boat;
    vector<Pirate_Ship> vector_Pirate_Ship;
    vector<Pirate_Submarine> vector_Pirate_Submarine;
    vector<Man_Boat> vector_Man_Boat;
    vector<Man_Ship> vector_Man_Ship;
    vector<Man_Submarine> vector_Man_Submarine;
    
    int get_power_attack() {
        int result = 0;

        for (int i = 0; i < vector_Pirate_Boat.size(); i++)
            result += vector_Pirate_Boat[i].getStrength();
        for (int i = 0; i < vector_Pirate_Ship.size(); i++)
            result += vector_Pirate_Ship[i].getStrength();
        for (int i = 0; i < vector_Pirate_Submarine.size(); i++)
            result += vector_Pirate_Submarine[i].getStrength();

        for (int i = 0; i < vector_Man_Boat.size(); i++)
            result += vector_Man_Boat[i].getStrength();
        for (int i = 0; i < vector_Man_Ship.size(); i++)
            result += vector_Man_Ship[i].getStrength();
        for (int i = 0; i < vector_Man_Submarine.size(); i++)
            result += vector_Man_Submarine[i].getStrength();

        return result;
    }

    vector<int> get_number_unit() {
        vector<int> number_unit(3);

        if (!vector_Pirate_Boat.empty()) {
            number_unit[0] = vector_Pirate_Boat.size();
        }
        if (!vector_Pirate_Ship.empty()) {
            number_unit[1] = vector_Pirate_Ship.size();
        }
        if (!vector_Pirate_Submarine.empty()) {
            number_unit[2] = vector_Pirate_Submarine.size();
        }

        if (!vector_Man_Boat.empty()) {
            number_unit[0] = vector_Man_Boat.size();
        }
        if (!vector_Man_Ship.empty()) {
            number_unit[1] = vector_Man_Ship.size();
        }
        if (!vector_Man_Submarine.empty()) {
            number_unit[2] = vector_Man_Submarine.size();
        }
        return number_unit;
    }

    string get_race() {

        if (!vector_Pirate_Boat.empty()) {
            return "Pirate";
        }
        if (!vector_Pirate_Ship.empty()) {
            return "Pirate";
        }
        if (!vector_Pirate_Submarine.empty()) {
            return "Pirate";
        }

        if (!vector_Man_Boat.empty()) {
            return "Man";
        }
        if (!vector_Man_Ship.empty()) {
            return "Man";
        }
        if (!vector_Man_Submarine.empty()) {
            return "Man";
        }
        return "null";
    }

};

class Army_builder {
protected:
    Army *p;
public:
    Army_builder() : p(nullptr) {}

    virtual void createArmy() {}

    virtual void build_Pirate_Boat(int number_unit_Pirate) {}

    virtual void build_Pirate_Ship(int number_unit_Pirate) {}

    virtual void build_Pirate_Submarine(int number_unit_Pirate) {}


    virtual void build_Man_Boat(int number_unit_Man) {}

    virtual void build_Man_Ship(int number_unit_Man) {}

    virtual void build_Man_Submarine(int number_unit_Man) {}

    virtual string get_race() {}

    virtual Army *getArmy() {
        return p;
    }
};

class Pirate_army_builder : public Army_builder {
public:
    void createArmy() override { p = new Army; }

    void build_Pirate_Boat(int number_unit_Pirate) override {
         
        for (int i = 0; i < number_unit_Pirate; i++)
           p->vector_Pirate_Boat.emplace_back(Pirate_Boat());
    }

    void build_Pirate_Ship(int number_unit_Pirate) override {
        for (int i = 0; i < number_unit_Pirate; i++)
            p->vector_Pirate_Ship.emplace_back(Pirate_Ship());
    }

    void build_Pirate_Submarine(int number_unit_Pirate) override {
        for (int i = 0; i < number_unit_Pirate; i++)
            p->vector_Pirate_Submarine.emplace_back(Pirate_Submarine());
    }

    string get_race() override {
        return "Pirate";
    }

    ~Pirate_army_builder() = default;
};

class Man_army_builder : public Army_builder {
public:
    void createArmy() override { p = new Army; }

    void build_Man_Boat(int number_unit_Man) override {
        for (int i = 0; i < number_unit_Man; i++)
            p->vector_Man_Boat.emplace_back(Man_Boat());
    }

    void build_Man_Ship(int number_unit_Man) override {
        for (int i = 0; i < number_unit_Man; i++)
            p->vector_Man_Ship.emplace_back(Man_Ship());
    }

    void build_Man_Submarine(int number_unit_Man) override {
        for (int i = 0; i < number_unit_Man; i++)
            p->vector_Man_Submarine.emplace_back(Man_Submarine());
    }

    string get_race() override  {
        return "Man";
    }

    ~Man_army_builder() = default;
};
class Director {
public:
    Army *createArmy(Army_builder &builder, int number_Boat,
                     int number_Ship, int number_Submarine) {

        builder.createArmy();            
        builder.build_Pirate_Boat(number_Boat);
        builder.build_Pirate_Ship(number_Ship);
        builder.build_Pirate_Submarine(number_Submarine);

        builder.build_Man_Boat(number_Boat);
        builder.build_Man_Ship(number_Ship);
        builder.build_Man_Submarine(number_Submarine);
        return (builder.getArmy());
    }
};

