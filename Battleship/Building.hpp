#include "my_hero.hpp"
#include "Fleet_tools.hpp"
#pragma once

class Game;

class Main_building {
public:
    Main_building() = default;

    void info() {
        cout << "I am building" << endl;
    }

    Fleet* get_Fleet() {
        return sea_warriors_in_build;
    }

    virtual void zero_Fleet() = 0;

    virtual void up_number_sea_warrior(Game &game) = 0;
protected:
    Director dir;                                    
    Fleet *sea_warriors_in_build;                         
};



class Shipyard : public Main_building{
public:
    Shipyard() = default;

    void info_building() {
        cout << "Верфь" << endl;
    }
};

class Castle : public Main_building {
public:
    Castle() = default;

    void info_building() {
        cout << "Замок" << endl;
    }
};


class Man_Shipyard : public Shipyard {
public:
    void up_number_sea_warrior(Game &game) override {
        Man_Fleet_builder Man_builder;
        Fleet* new_sea_warriors_in_build = dir.createFleet(Man_builder, 0, 10, 0);
        sea_warriors_in_build = association_Fleet(dir, sea_warriors_in_build, new_sea_warriors_in_build);
    }

    void zero_Fleet() override {
        Man_Fleet_builder Man_builder;
        sea_warriors_in_build = dir.createFleet(Man_builder, 0, 0, 0);
    }
};

class Pirate_Shipyard : public Shipyard {
public:
    void up_number_sea_warrior(Game &game) override {
        Pirate_Fleet_builder Pirate_builder;
        Fleet* new_sea_warriors_in_build = dir.createFleet(Pirate_builder, 0, 10, 0);
        sea_warriors_in_build = association_Fleet(dir, sea_warriors_in_build, new_sea_warriors_in_build);
        cout << endl;
    }

    void zero_Fleet() override {
        Pirate_Fleet_builder Pirate_builder;
        sea_warriors_in_build = dir.createFleet(Pirate_builder, 0, 0, 0);

    }
};





class Man_castle : public Castle {
public:
    void up_number_sea_warrior(Game &game) override {
        Man_Fleet_builder Man_builder;
        Fleet* new_sea_warriors_in_build = dir.createFleet(Man_builder, 5, 5, 5);
        sea_warriors_in_build = association_Fleet(dir, sea_warriors_in_build, new_sea_warriors_in_build);
    }

    void zero_Fleet() override  {
        Man_Fleet_builder Man_builder;
        sea_warriors_in_build = dir.createFleet(Man_builder, 0, 0, 0);
    }
};

class Pirate_castle : public Castle {
public:
    void up_number_sea_warrior(Game &game) override {
        Pirate_Fleet_builder Pirate_builder;
        Fleet* new_sea_warriors_in_build = dir.createFleet(Pirate_builder, 5, 5, 5);
        sea_warriors_in_build = association_Fleet(dir, sea_warriors_in_build, new_sea_warriors_in_build);
    }

    void zero_Fleet() override {
        Pirate_Fleet_builder Pirate_builder;
        sea_warriors_in_build = dir.createFleet(Pirate_builder, 0, 0, 0);
    }
};

