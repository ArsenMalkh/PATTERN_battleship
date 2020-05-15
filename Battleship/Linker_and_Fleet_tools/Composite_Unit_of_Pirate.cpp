#include <vector>
#include "Unit_Man.h"
#include "Unit_Pirate.h"
#include "Man_Boat.h"
#include "Man_Ship.h"
#include "Man_Submarine.h"
#include "Pirate_Boat.h"
#include "Pirate_Ship.h"
#include "Pirate_Submarine.h"
#include "Composite_Unit_of_Pirate.h"


int Composite_Unit_of_Pirate::getStrength() {
    int total = 0;
    for (int i = 0; i < c.size(); ++i)
        total += c[i]->getStrength();
    return total;
}

void Composite_Unit_of_Pirate::info() {};

void Composite_Unit_of_Pirate::attack() {};

void Composite_Unit_of_Pirate::defend() {};

void Composite_Unit_of_Pirate::addUnit(Unit_of_Pirate *p) {
    c.push_back(p);
}

Composite_Unit_of_Pirate::~Composite_Unit_of_Pirate(){
    for (int i = 0; i < c.size(); ++i)
        delete c[i];
}

// Вспомогательная функция для создания легиона пиратов
Composite_Unit_of_Pirate *create_legion_Pirate(int x, int y, int z) {
    // Легион пиратов содержит:
    Composite_Unit_of_Pirate *legion = new Composite_Unit_of_Pirate;
    for (int i = 0; i < x; ++i)
        legion->addUnit(new Pirate_Boat);
    for (int i = 0; i < y; ++i)
        legion->addUnit(new Pirate_Ship);
    for (int i = 0; i < z; ++i)
        legion->addUnit(new Pirate_Submarine);

    return legion;
}