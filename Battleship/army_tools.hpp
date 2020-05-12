#include "Army_builder.hpp"
#pragma once

auto association_army(Director dir, Army *first_army, Army *second_army) {
    vector<int> number_unit_first = first_army->get_number_unit();
    vector<int> number_unit_second = second_army->get_number_unit();
    int one = number_unit_first[0] + number_unit_second[0];
    int two = number_unit_first[1] + number_unit_second[1];
    int three = number_unit_first[2] + number_unit_second[2];
    string race_first = first_army->get_race();
    string race_second = second_army->get_race();
    string race;
    if (race_first == "null")
        race = race_second;
    else
        race = race_first;
    Army* new_army;
    if (race == "Pirate") {
        Pirate_army_builder Pirate_builder;
        new_army = dir.createArmy(Pirate_builder, one, two, three);

    } else if (race == "Man") {
        Man_army_builder Man_builder;
        new_army = dir.createArmy(Man_builder, one, two, three);
    }
    return new_army;
};

// функция для битвы
template <typename t_1, typename  t_2>
auto battle_army(Director dir, t_1 first_army, t_2 second_army) {
    vector<int> number_unit_first = first_army->get_number_unit();
    vector<int> number_unit_second = second_army->get_number_unit();
    string race_first = first_army->get_race();
    string race_second = second_army->get_race();
    int power_first = first_army->get_power_attack();
    int power_second = second_army->get_power_attack();
    Army *new_army;
    if (power_first > power_second) {
       if (race_first == "Pirate") {
            Pirate_army_builder Pirate_builder;
            new_army = dir.createArmy(Pirate_builder,
                                      number_unit_first[0] / 100 * 10,
                                      number_unit_first[1] / 100 * 10,
                                      number_unit_first[2] / 100 * 5);
        } else if (race_first == "Man") {
            Man_army_builder Man_builder;
            new_army = dir.createArmy(Man_builder,
                                      number_unit_first[0] / 100 * 10,
                                      number_unit_first[1] / 100 * 10,
                                      number_unit_first[2] / 100 * 5);
        }
        return new_army;
    } else {
         if (race_second == "Pirate") {
            Pirate_army_builder Pirate_builder;
            new_army = dir.createArmy(Pirate_builder,
                                      number_unit_second[0] / 100 * 10,
                                      number_unit_second[1] / 100 * 10,
                                      number_unit_second[2] / 100 * 5);
        } else if (race_second == "Man") {
            Man_army_builder Man_builder;
            new_army = dir.createArmy(Man_builder,
                                      number_unit_second[0] / 100 * 10,
                                      number_unit_second[1] / 100 * 10,
                                      number_unit_second[2] / 100 * 5);
        }
        return new_army;
    }

};
