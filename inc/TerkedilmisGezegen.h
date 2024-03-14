//
// Created by Hayrullah on 3/6/2024.
//

#ifndef PROJEDENEME1_TERKEDILMISGEZEGEN_H
#define PROJEDENEME1_TERKEDILMISGEZEGEN_H

#include "../inc/Event.h"

class TerkedilmisGezegen : public Event {
public:


    void uzayKorsaniMiAltinMiIcinOlasilikFonksiyonu();
    void uzayKorsaniMiAltinMi ();

    void TerkEdilmisGezegendeUzayKorsanlariCagirmakIcinFonksiyon();


    void pureVirtualYapanFonksiyon() override;

    TerkedilmisGezegen( std::shared_ptr<Gemi>);
    ~TerkedilmisGezegen();



};
#endif //PROJEDENEME1_TERKEDILMISGEZEGEN_H
