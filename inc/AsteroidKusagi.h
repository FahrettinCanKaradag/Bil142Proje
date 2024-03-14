//
// Created by CAN on 14.03.2024.
//

#ifndef INC_142ROJE_CYOLOG_ASTEROIDKUSAGI_H
#define INC_142ROJE_CYOLOG_ASTEROIDKUSAGI_H

#include "../inc/Event.h"


class AsteroidKusagi : public Event
{
public:
    void GemiHasarAldiMi(int);

    void AsteroidKusagiBusinessLogicYapanFonk();



    void pureVirtualYapanFonksiyon() override;

    AsteroidKusagi(std::shared_ptr<Gemi> );


};

#endif //INC_142ROJE_CYOLOG_ASTEROIDKUSAGI_H
