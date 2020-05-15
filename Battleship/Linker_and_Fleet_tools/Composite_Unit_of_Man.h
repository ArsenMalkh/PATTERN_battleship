#pragma once
#include <vector>
#include "Unit_Man.h"
#include "Man_Boat.h"
#include "Man_Ship.h"
#include "Man_Submarine.h"
using namespace std;

//composite for Man
class Composite_Unit_of_Man : public Unit_of_Man {
public:
    int getStrength();

    void info() final;

    void attack() final;

    void defend() final;

    void addUnit(Unit_of_Man *p) final;

    ~Composite_Unit_of_Man() final;

private:
    std::vector<Unit_of_Man *> c;
};

// Вспомогательная функция для создания легиона людей
Composite_Unit_of_Man *create_legion_Man(int x, int y, int z);
