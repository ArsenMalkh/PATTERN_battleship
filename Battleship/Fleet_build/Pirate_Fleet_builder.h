#pragma once
#include <vector>
#include "Fleet_builder.h"
using namespace std;


class Pirate_Fleet_builder : public Fleet_builder {
public:
    void createFleet() override;

    void build_Pirate_Boat(int number_unit_Pirate) override;

    void build_Pirate_Ship(int number_unit_Pirate) override;

    void build_Pirate_Submarine(int number_unit_Pirate) override;

    string get_race() override;

    ~Pirate_Fleet_builder() = default;
};