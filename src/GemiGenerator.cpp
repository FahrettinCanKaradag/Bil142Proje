//
// Created by Hayrullah on 3/10/2024.
//
#include "GemiGenerator.h"
#include <iostream>
#include<memory>
#include "../inc/HizliGemi.h"
#include "../inc/GucluGemi.h"
#include "../inc/NormalGemi.h"
#include   <array>



void GemiGenerator::GemiGeneratorGemiGenerateEdecekFonksiyon(int KullaniciTercihi) {
    std::shared_ptr<Gemi> MyGemi = nullptr;
    switch (KullaniciTercihi) {
        case 1:
            MyGemi = std::make_shared<NormalGemi>();
            break;
        case 2:
            MyGemi = std::make_shared<GucluGemi>();
            break;
        case 3:
            MyGemi = std::make_shared<HizliGemi>();
            break;
    }

    GemiGeneratorileEventGenerateEdenFonksiyon(MyGemi);

}

void GemiGenerator:: GemiGeneratorileEventGenerateEdenFonksiyon(std::shared_ptr<Gemi> MyGemi)
{
    std::shared_ptr<EventGenerator>NewEvent;

    int denemeSayisi=KacKereEventCagrilacak;
    int denemeSayaci{1};
   // std::cout<<"deneme sayaci"<<"\n";

    while (!MyGemi->GemiOlduMu()&&denemeSayaci<=denemeSayisi)
    {

        std::cout<<"Event: "<<denemeSayaci<<"\n";
        NewEvent = std::make_shared<EventGenerator>(MyGemi);
        ++denemeSayaci;

    }

    std::cout<<"Toplam puaniniz: "<<MyGemi->PuanHesaplama()<<"\n";
}



void GemiGenerator::GemiGeneratorKullaniciIleIletisimKuracakFonksiyon()
{
    std::cout<<"Gemi Secimine Hosgeldiniz...\n";

    GemiSecimiBaslangici:

    std::cout<<"Lutfen Gemi Turunu Giriniz \n Normal Gemi icin 1\n Guclu Gemi icin 2\n Hizli Gemi icin 3\n";
    int GemiTuruNumber;
    std::cin>>GemiTuruNumber;
    if(toplamGemiTuru>=GemiTuruNumber && GemiTuruNumber>0){
        GemiGeneratorGemiGenerateEdecekFonksiyon(GemiTuruNumber);}
    else
    {
        std::cout<<"Yanlis sayi girdiniz.Tekrar deneyiniz...\n";
        goto GemiSecimiBaslangici;
    }

}

GemiGenerator::GemiGenerator()
{
    this->GemiGeneratorKullaniciIleIletisimKuracakFonksiyon();
}