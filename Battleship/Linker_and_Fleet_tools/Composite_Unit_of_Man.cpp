#include <vector>
#include "Unit_Man.h"
#include "Man_Boat.h"
#include "Man_Ship.h"
#include "Man_Submarine.h"
#include "Composite_Unit_of_Man.h"


int Composite_Unit_of_Man::getStrength() {
    int total = 0;
    for (int i = 0; i < c.size(); ++i)
        total += c[i]->getStrength();
    return total;
}

void Composite_Unit_of_Man::info() {};

void Composite_Unit_of_Man::attack() {};

void Composite_Unit_of_Man::defend() {};

void Composite_Unit_of_Man::addUnit(Unit_of_Man *p) {
    c.push_back(p);
}

Composite_Unit_of_Man::~Composite_Unit_of_Man() {
    for (int i = 0; i < c.size(); ++i)
        delete c[i];
}

// Вспомогательная функция для создания легиона людей
Composite_Unit_of_Man *create_legion_Man(int x, int y, int z) {
    // Легион людей содержит:
    Composite_Unit_of_Man *legion = new Composite_Unit_of_Man;
    for (int i = 0; i < x; ++i)
        legion->addUnit(new Man_Boat);
    for (int i = 0; i < y; ++i)
        legion->addUnit(new Man_Ship);
    for (int i = 0; i < z; ++i)
        legion->addUnit(new Man_Submarine);

    return legion;
}