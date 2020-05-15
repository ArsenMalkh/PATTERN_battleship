cmake_minimum_required(VERSION 3.10.2)
project(Game)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_EXE  Units/Unit_Man.cpp
                Units/Unit_Pirate.cpp
                Units/Man_Boat.cpp
                Units/Man_Ship.cpp
                Units/Man_Submarine.cpp
                Units/Pirate_Boat.cpp
                Units/Pirate_Ship.cpp
                Units/Pirate_Submarine.cpp 
                Factories/Factory_Of_Man.cpp 
                Factories/Factory_Of_Pirate.cpp
                Factories/Factory_Of_Man.cpp
                Factories/Factory_Of_Pirate.cpp
                Factories/Man_Boat_factory.cpp
                Factories/Man_Ship_factory.cpp
                Factories/Man_Submarine_factory.cpp
                Factories/Pirate_Boat_factory.cpp
                Factories/Pirate_Ship_factory.cpp
                Factories/Pirate_Submarine_factory.cpp
                Fleet_build/Fleet.cpp
                Fleet_build/Fleet_builder.cpp
                Fleet_build/Pirate_Fleet_builder.cpp
                Fleet_build/Man_Fleet_builder.cpp
                Fleet_build/Head.cpp
                Linker_and_Fleet_tools/Fleet_tools.hpp 
                Linker_and_Fleet_tools/Composite_Unit_of_Man.cpp
                Linker_and_Fleet_tools/Composite_Unit_of_Pirate.cpp
                play_game.cpp 
                change_level.hpp 
                my_hero.hpp 
                game_map.hpp 
                Observe_and_building/Building.hpp
                Observe_and_building/Observe.hpp 
                opponent.hpp
                )

include_directories(const_values Units Factories Fleet_build Linker_and_Fleet_tools Observe_and_building)
add_executable(Game ${SOURCE_EXE})
