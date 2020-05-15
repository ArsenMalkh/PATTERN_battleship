#pragma once
#include <vector>
#include "Unit_Man.h"
#include "Unit_Pirate.h"
#include "Man_Boat.h"
#include "Man_Ship.h"
#include "Man_Submarine.h"
#include "Pirate_Boat.h"
#include "Pirate_Ship.h"
#include "Pirate_Submarine.h"


// Composite for Pirate
class Composite_Unit_of_Pirate : public Unit_of_Pirate{
public:
    int getStrength();

    void info() final;

    void attack() final;

    void defend() final;

    void addUnit(Unit_of_Pirate *p) final;

    ~Composite_Unit_of_Pirate() final;

private:
    std::vector<Unit_of_Pirate *> c;
};

// Вспомогательная функция для создания легиона пиратов
Composite_Unit_of_Pirate *create_legion_Pirate(int x, int y, int z);