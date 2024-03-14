//
// Created by Hayrullah on 3/6/2024.
//

#ifndef PROJEDENEME1_GUCLUGEMI_H
#define PROJEDENEME1_GUCLUGEMI_H


#include "Gemi.h"



class GucluGemi:public Gemi
{public:
    GucluGemi();
protected:
    void hiz_Belirleme  () override;
    void dayaniklilik_Belirleme () override ;
    void para_Belirleme () override ;
    void saglik_Belirleme () override;
    void yakit_Belirleme () override;


};





#endif //PROJEDENEME1_GUCLUGEMI_H
