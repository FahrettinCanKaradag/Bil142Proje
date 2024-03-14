//
// Created by Hayrullah on 3/6/2024.
//

#ifndef PROJEDENEME1_EVENT_H
#define PROJEDENEME1_EVENT_H
#include "../inc/Gemi.h"
#include<memory>



class Event{
protected:
    Event()=default;
public :
    std::shared_ptr<Gemi> BuGemi= nullptr;
    Event(std::shared_ptr<Gemi>  SecilenGemi);




    int eventNumber{0};


protected:
    virtual void pureVirtualYapanFonksiyon()=0;



};


#endif //PROJEDENEME1_EVENT_H
