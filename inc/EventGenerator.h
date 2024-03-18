//
// Created by Hayrullah on 3/10/2024.
//

#ifndef PROJEDENEME1_EVENTGENERATOR_H
#define PROJEDENEME1_EVENTGENERATOR_H

#endif //PROJEDENEME1_EVENTGENERATOR_H

#include "../inc/Event.h"
class EventGenerator{


public:
    EventGenerator(std::shared_ptr<Gemi> );
    const int TotalEventNumber{3};
    std::shared_ptr<Gemi>  eventGenerateEtmekIcinGemi;
    void EventGenerateEdecekFonksiyon();
    const int OlayCagirmaSayisi{5};


};