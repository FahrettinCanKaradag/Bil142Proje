//
// Created by Hayrullah on 3/6/2024.
//

#ifndef PROJEDENEME1_EVENT_H
#define PROJEDENEME1_EVENT_H
#include "Gemi.h"


class Event{
public :
    Gemi* BuGemi;
    const int EventNumber;
    virtual bool Yakit0Mi()=0;
    bool GemiOlduMu();
    int PuanHesaplama (int,int,int);


};


#endif //PROJEDENEME1_EVENT_H
