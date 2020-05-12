#include <iostream>
#include "const_value_level_1.h"
#include "const_value_level_2.h"
#pragma once

using namespace std;

class Game;

void change_1(Game &game){
    cout << "Сложность игра - 1!" << endl;
    game.change_level(level_game_1);
}

void change_2(Game &game){
    cout << "Сложность игра - 2" << endl;
    game.change_level(level_game_2);
}