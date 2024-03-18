cmake_minimum_required(VERSION 3.27)
project(ProjeDeneme1)

set(CMAKE_CXX_STANDARD 17)
include_directories(inc)

set (
        src/Gemi.cpp
        src/NormalGemi.cpp
        src/HizliGemi.cpp
        src/GucluGemi.cpp
        src/Event.cpp
        src/UzayKorsanlari.cpp
        src/AsteroidKusagi.cpp
        src/TerkedilmisGezegen.cpp
        src/EventGenerator.cpp
        src/GemiGenerator.cpp
)


add_executable(ProjeDeneme1 main.cpp ${SOURCE_FILES}
        src/Gemi.cpp
        src/NormalGemi.cpp
        src/HizliGemi.cpp
        src/GucluGemi.cpp
        src/Event.cpp
        src/UzayKorsanlari.cpp
        src/AsteroidKusagi.cpp
        src/TerkedilmisGezegen.cpp
        src/EventGenerator.cpp
        src/GemiGenerator.cpp

)

