//
// Created by Hayrullah on 3/6/2024.
//

#ifndef PROJEDENEME1_ASTEROIDKUSAGI_H
#define PROJEDENEME1_ASTEROIDKUSAGI_H
#include "../inc/Event.h"


class AsteroidKusagi : public Event
        {
public:
    void GemiHasarAldiMi(int);

    void AsteroidKusagiBusinessLogicYapanFonk();



    void pureVirtualYapanFonksiyon() override;

    AsteroidKusagi(std::shared_ptr<Gemi> );


};
#endif //PROJEDENEME1_ASTEROIDKUSAGI_H
