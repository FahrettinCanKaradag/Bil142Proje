//
// Created by Hayrullah on 3/10/2024.
//
#include <iostream>
#include "../inc/EventGenerator.h"
#include "../inc/UzayKorsanlari.h"
#include "../inc/TerkedilmisGezegen.h"
#include "../inc/AsteroidKusagi.h"

#include<cmath>



EventGenerator::EventGenerator(std::shared_ptr<Gemi>  AlinanGemi )
{
    eventGenerateEtmekIcinGemi=std::move(AlinanGemi);
    this->EventGenerateEdecekFonksiyon();

}


void EventGenerator::EventGenerateEdecekFonksiyon()

{

//std::cout<<"deneme EventGenerateEdecekFonksiyon \n";
    int randomGeneratedNumber =(rand()%(TotalEventNumber))+1;//random bir sayi olusturuldu
//std::cout<<randomGeneratedNumber<<" random generated number\n";
    std::shared_ptr<Event> NewEvent= nullptr;
    switch(randomGeneratedNumber)
    {

        case 1:
            //std::cout<<"case 1 \n";
            NewEvent = std::make_shared<AsteroidKusagi> (eventGenerateEtmekIcinGemi);//gemi ile eventi generate edemiyoruz
            break;
        case 2:
          // std::cout<<"case 2\n";
            NewEvent = std::make_shared<UzayKorsanlari> (eventGenerateEtmekIcinGemi);
            break;
        case 3:
            //std::cout<<"case 3\n";
            NewEvent = std::make_shared<TerkedilmisGezegen>(eventGenerateEtmekIcinGemi);
            break;
        default:
           // std::cout<<"default";
            break;
    }


}



