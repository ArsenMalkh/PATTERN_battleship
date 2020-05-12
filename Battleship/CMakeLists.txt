cmake_minimum_required(VERSION 3.10.2)
project(Game)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_EXE  Unit_Man.h 
                Unit_Pirate.h  
                Factory_Of_Man.hpp 
                Factory_Of_Pirate.hpp 
                Army_builder.hpp
                army_tools.hpp 
                composite_unit.hpp 
                play_game.cpp 
                const_values/const_value_level_1.h 
                const_values/const_value_level_2.h
                const_values/first_value_army.h
                change_level.hpp 
                my_hero.hpp 
                game_map.hpp 
                Building.hpp 
                Observe.hpp 
                opponent.hpp)

include_directories(const_values)
add_executable(Game ${SOURCE_EXE})
