//
// Created by Hayrullah on 3/6/2024.
//

#ifndef PROJEDENEME1_UZAYKORSANLARI_H
#define PROJEDENEME1_UZAYKORSANLARI_H

#include "Event.h"

class UzayKorsanlari: public Event
{
public:
    const int UzayKorsanlariKarsisindaYapilabilecekSayisi{3};

    //  Bu Eventi duzenleyen fonksiyonlar
    void UzayKorsanlariniBaslatacakFonksiyon();
    void KullaiciTercihiAlmaFonksiyonu ();
    void OlaylarArasindaBusinessLogicYapanFonk(int);

    //Kacma Durumu icin Olan Fonksiyonlar
    bool KacmaTercihiSonucu();

    //Savasma Durumu icin Olan Fonksiyonlar
    void SavasmaTercihiSonucu();


    //Pazarlik Durumu icin Olan Fonksiyonlar
    void PazarlikTercihiSonucu();
    void UzayKorsanlariPazarlikTercihiIcinOlasilikFonkisyonu();

    void pureVirtualYapanFonksiyon() override;

    ~UzayKorsanlari();

    UzayKorsanlari(std::shared_ptr<Gemi>);



};



#endif //PROJEDENEME1_UZAYKORSANLARI_H
