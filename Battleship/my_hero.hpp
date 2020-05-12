#include <vector>
#include "Unit_Pirate.h"
#include "Unit_Man.h"
#include "Factory_Of_Pirate.hpp"
#include "Factory_Of_Man.hpp"
#include "composite_unit.hpp"
#include "Army_builder.hpp"
#include "first_value_army.h"

#pragma once

using namespace std;

class Game;

class Hero {
public:
    Hero() {
        cout << "Введите имя героя: ";
        cin >> name;
        cout << endl;
        value_treasure = 0;
        now_position = make_pair(1, 0);
    }

    virtual void info_race() = 0;

    virtual int get_power_army() = 0;

    void up_treasure() {
        value_treasure += treasure_game_1;
    };

    vector<int> get_number_unit(){
        return sea_warriors->get_number_unit();
    }

    string get_name_hero(){
        return name;
    }

    int get_treasure() {
        return value_treasure;
    }

    pair<int, int> get_position_player() {
        return now_position;
    };

    void change_position(int x, int y) {
        now_position = make_pair(x, y);
    }

    void new_army(Army* arm) {

        sea_warriors = arm;
    }

    Army* get_army() {
        return sea_warriors;
    }

protected:
    string name;                                                // имя героя
    Director dir;                                               // создали класс распорядитель
    Army *sea_warriors;                                             // армия героя
    int value_treasure;                                         // увеличение мощи сокровищем
    pair<int, int> now_position;                                // текущая позиция игрока (x, y)
};

class Man_hero : public Hero {
public:
    Man_hero(){
        Man_army_builder Man_builder;
        sea_warriors = dir.createArmy(Man_builder, Boats, Ships, Submarines);     // создали базовый комлект войнов для эльфов
    }

    void info_race() override {
        cout << "Я эльф, дитя природы..." << endl;
    }

    int get_power_army() override {
        return sea_warriors->get_power_attack();
    }
};


class Pirate_hero : public Hero {
public:
    Pirate_hero(){
        Pirate_army_builder Pirate_builder;
        sea_warriors = dir.createArmy(Pirate_builder, Boats, Ships, Submarines);     // создали базовый комлект войнов для эльфов
    }

    void info_race() override {
        cout << "Я гном, дитя гор..." << endl;
    }

    int get_power_army() override {
        return sea_warriors->get_power_attack();
    }
};