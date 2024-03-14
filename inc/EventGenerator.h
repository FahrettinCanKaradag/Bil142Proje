//
// Created by CAN on 14.03.2024.
//

#ifndef INC_142ROJE_CYOLOG_EVENTGENERATOR_H
#define INC_142ROJE_CYOLOG_EVENTGENERATOR_H

#endif //INC_142ROJE_CYOLOG_EVENTGENERATOR_H


#include "../../Proje/inc/Event.h"
class EventGenerator{


public:
    EventGenerator(std::shared_ptr<Gemi> );
    const int TotalEventNumber{3};
    std::shared_ptr<Gemi>  eventGenerateEtmekIcinGemi;
    void EventGenerateEdecekFonksiyon();
    const int OlayCagirmaSayisi{5};

};