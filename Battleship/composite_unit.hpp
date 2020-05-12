#include <vector>
#include "Unit_Man.h"
#include "Unit_Pirate.h"
#pragma once
class Composite_Unit_of_Man : public Unit_of_Man {
public:
    int getStrength() {
        int total = 0;
        for (int i = 0; i < c.size(); ++i)
            total += c[i]->getStrength();
        return total;
    }

    void info() final {};

    void attack() final {};

    void defend() final {};

    void addUnit(Unit_of_Man *p) final {
        c.push_back(p);
    }

    ~Composite_Unit_of_Man() final {
        for (int i = 0; i < c.size(); ++i)
            delete c[i];
    }

private:
    std::vector<Unit_of_Man *> c;
};

// Composite for Pirate
class Composite_Unit_Pirate : public Unit_Pirate {
public:
    int getStrength() {
        int total = 0;
        for (int i = 0; i < c.size(); ++i)
            total += c[i]->getStrength();
        return total;
    }

    void info() final {};

    void attack() final {};

    void defend() final {};

    void addUnit(Unit_Pirate *p) final {
        c.push_back(p);
    }

    ~Composite_Unit_Pirate() final {
        for (int i = 0; i < c.size(); ++i)
            delete c[i];
    }

private:
    std::vector<Unit_Pirate *> c;
};

// Вспомогательная функция для создания легиона эльфов
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

// Вспомогательная функция для создания легиона гномов
Composite_Unit_Pirate *create_legion_Pirate(int x, int y, int z) {
    // Легион людей содержит:
    Composite_Unit_Pirate *legion = new Composite_Unit_Pirate;
    for (int i = 0; i < x; ++i)
        legion->addUnit(new Pirate_Boat);
    for (int i = 0; i < y; ++i)
        legion->addUnit(new Pirate_Ship);
    for (int i = 0; i < z; ++i)
        legion->addUnit(new Pirate_Submarine);

    return legion;
}
