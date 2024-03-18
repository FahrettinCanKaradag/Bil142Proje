//
// Created by Hayrullah on 3/10/2024.
//

#include <iostream>
#include "AsteroidKusagi.h"

void   AsteroidKusagi::GemiHasarAldiMi(int sayac)
{
    const int BirKeredeAlinacakHasar{10};
    int randomGeneratedNumber = rand()%101;//random bir sayi olusturuldu
    const double GemiHasarOlmaOlasiligi{50.0};

    //int BuGemininHasarOlmaOlasiligi=static_cast<int>(GemiHasarOlmaOlasiligi/(BuGemi->hiz));






    if(randomGeneratedNumber>=static_cast<int>(GemiHasarOlmaOlasiligi/(BuGemi->hizKatsayisi)))
    {
        std::cout<<sayac<<". Ihtimalde Asteroid Kusaginda Hasar Alinmadan Kurtulundu \n ";
    }
    else
    {
        std::cout<<sayac<<".Ihtimalde Asteroid Kusaginda Gemi Hasar aldi\n";
        BuGemi->saglikGuncelleme(BirKeredeAlinacakHasar);

        if(BuGemi->saglikOgrenme()>=0)
        {
            std::cout<<"Geminin Kalan Sagligi \n"<<BuGemi->saglikOgrenme()<<"\n";
        }


    }

}


void AsteroidKusagi::AsteroidKusagiBusinessLogicYapanFonk() {

   const int GemiHasariFonksiyonuKacKereDonecek{3};

    std::cout<<"Gemi Asteroid Kusagina Denk Geldi "<<GemiHasariFonksiyonuKacKereDonecek;
    std::cout<<"kere hasar alma ihtimali var \n";

    for(int sayac{1};sayac<=GemiHasariFonksiyonuKacKereDonecek;++sayac)
    {
        GemiHasarAldiMi(sayac);
        if(BuGemi->GemiOlduMu())
        {break;}
    }
}






void AsteroidKusagi::pureVirtualYapanFonksiyon() {}

AsteroidKusagi::AsteroidKusagi(std::shared_ptr<Gemi>  AlinanGemi) {

    BuGemi=std::move(AlinanGemi);
    this->AsteroidKusagiBusinessLogicYapanFonk();

}