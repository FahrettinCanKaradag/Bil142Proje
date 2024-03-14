cmake_minimum_required(VERSION 3.17)
project(142ROJE_Cyolog)

set(CMAKE_CXX_STANDARD 20)

add_executable(142ROJE_Cyolog main.cpp src/AsteroidKusagi.cpp inc/EventGenerator.h inc/GemiGenerator.h inc/AsteroidKusagi.h src/Event.cpp src/EventGenerator.cpp src/Gemi.cpp src/GemiGenerator.cpp src/HizliGemi.cpp src/NormalGemi.cpp src/GucluGemi.cpp src/TerkedilmisGezegen.cpp src/UzayKorsanlari.cpp)

set(CMAKE_CXX_STANDARD 17)
include_directories(inc)



