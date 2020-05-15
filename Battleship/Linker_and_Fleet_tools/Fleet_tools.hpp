#pragma once
#include "Fleet.h"
#include "Head.h"
#include "Fleet_builder.h"
#include "Pirate_Fleet_builder.h"
#include "Man_Fleet_builder.h"

//Функция объединения 
auto association_Fleet(Head dir, Fleet *first_Fleet, Fleet *second_Fleet) {
    vector<int> number_unit_first = first_Fleet->get_number_unit();
    vector<int> number_unit_second = second_Fleet->get_number_unit();
    int one = number_unit_first[0] + number_unit_second[0];
    int two = number_unit_first[1] + number_unit_second[1];
    int three = number_unit_first[2] + number_unit_second[2];
    string race_first = first_Fleet->get_race();
    string race_second = second_Fleet->get_race();
    string race;
    if (race_first == "null")
        race = race_second;
    else
        race = race_first;
    Fleet* new_Fleet;
    if (race == "Pirate") {
        Pirate_Fleet_builder Pirate_builder;
        new_Fleet = dir.createFleet(Pirate_builder, one, two, three);

    } else if (race == "Man") {
        Man_Fleet_builder Man_builder;
        new_Fleet = dir.createFleet(Man_builder, one, two, three);
    }
    return new_Fleet;
};

// функция для битвы
template <typename t_1, typename  t_2>
auto battle_Fleet(Head dir, t_1 first_Fleet, t_2 second_Fleet) {
    vector<int> number_unit_first = first_Fleet->get_number_unit();
    vector<int> number_unit_second = second_Fleet->get_number_unit();
    string race_first = first_Fleet->get_race();
    string race_second = second_Fleet->get_race();
    int power_first = first_Fleet->get_power_attack();
    int power_second = second_Fleet->get_power_attack();
    Fleet *new_Fleet;
    if (power_first > power_second) {
       if (race_first == "Pirate") {
            Pirate_Fleet_builder Pirate_builder;
            new_Fleet = dir.createFleet(Pirate_builder,
                                      number_unit_first[0] / 100 * 10,
                                      number_unit_first[1] / 100 * 10,
                                      number_unit_first[2] / 100 * 5);
        } else if (race_first == "Man") {
            Man_Fleet_builder Man_builder;
            new_Fleet = dir.createFleet(Man_builder,
                                      number_unit_first[0] / 100 * 10,
                                      number_unit_first[1] / 100 * 10,
                                      number_unit_first[2] / 100 * 5);
        }
        return new_Fleet;
    } else {
         if (race_second == "Pirate") {
            Pirate_Fleet_builder Pirate_builder;
            new_Fleet = dir.createFleet(Pirate_builder,
                                      number_unit_second[0] / 100 * 10,
                                      number_unit_second[1] / 100 * 10,
                                      number_unit_second[2] / 100 * 5);
        } else if (race_second == "Man") {
            Man_Fleet_builder Man_builder;
            new_Fleet = dir.createFleet(Man_builder,
                                      number_unit_second[0] / 100 * 10,
                                      number_unit_second[1] / 100 * 10,
                                      number_unit_second[2] / 100 * 5);
        }
        return new_Fleet;
    }

};
