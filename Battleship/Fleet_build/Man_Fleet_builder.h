#pragma once
#include <vector>
#include "Fleet_builder.h"
using namespace std;

class Man_Fleet_builder : public Fleet_builder {
public:
    void createFleet() override;

    void build_Man_Boat(int number_unit_Man) override;

    void build_Man_Ship(int number_unit_Man) override;

    void build_Man_Submarine(int number_unit_Man) override;

    string get_race() override;

    ~Man_Fleet_builder() = default;
};