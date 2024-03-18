//
// Created by Hayrullah on 3/10/2024.
//

#include <iostream>
#include "../inc/TerkedilmisGezegen.h"
#include "../inc/UzayKorsanlari.h"




void TerkedilmisGezegen::uzayKorsaniMiAltinMiIcinOlasilikFonksiyonu()
{
    int randomGeneratedNumber =rand()%100;//random bir sayi olusturuldu
    int KacAltinKazanilsin{10};
    int altinCikmaOlasiligi{50};

    if(randomGeneratedNumber>=altinCikmaOlasiligi)
    {   std::cout<<"Terk edilmis gezegende altin buldunuz...\n";
        BuGemi->paraGuncelleme(KacAltinKazanilsin);}

    else
    {
        TerkEdilmisGezegendeUzayKorsanlariCagirmakIcinFonksiyon();//Terk edilmis Gezegende Uzay Korsanlari Baslatildi
    }

}




void TerkedilmisGezegen::TerkEdilmisGezegendeUzayKorsanlariCagirmakIcinFonksiyon()
{
    std::cout<<"Terk edilmis gezegende uzay korsanlarina denk geldiniz...\n";
    /*UzayKorsanlari* NewUzayKorsanlari= new UzayKorsanlari(BuGemi);
    NewUzayKorsanlari->UzayKorsanlariniBaslatacakFonksiyon();
    delete NewUzayKorsanlari; //Memory Leak olmamasi icin kullanildiktan sonra silindi*/

    std::shared_ptr<UzayKorsanlari> NewUzayKorsanlariEventi=std::make_shared<UzayKorsanlari>(BuGemi);

}




void TerkedilmisGezegen::uzayKorsaniMiAltinMi()
{
    std::cout<< "Terk edilmis gezegendesiniz ya uzay korsanlari ile karsilasacak ya da altin kazacaksiniz\n";
    uzayKorsaniMiAltinMiIcinOlasilikFonksiyonu();//Olasilik Fonksiyonu Yazildi
    //Buraya TerkedilmisGezegen icin baska olaylar yazilabilir
}


TerkedilmisGezegen::~TerkedilmisGezegen(){
    if (BuGemi->GemiOlduMu())
    {

        //std::cout<<"Terkedilmis gezegen destruct oldu\n";


    }
    else {
        //std::cout<<"Terkedilmis gezegen destruct oldu\n";

    }



}

void TerkedilmisGezegen::pureVirtualYapanFonksiyon() {}

TerkedilmisGezegen::TerkedilmisGezegen(std::shared_ptr<Gemi>  AlinanGemi) {

    BuGemi=std::move(AlinanGemi);
    this->uzayKorsaniMiAltinMi();
}