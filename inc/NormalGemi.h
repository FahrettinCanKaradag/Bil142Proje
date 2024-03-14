//
// Created by Hayrullah on 3/6/2024.
//

#ifndef PROJEDENEME1_NORMALGEMI_H
#define PROJEDENEME1_NORMALGEMI_H



#include "Gemi.h"



class NormalGemi:public Gemi
{
public:
    NormalGemi() ;
protected:

    void hiz_Belirleme () override;
    void dayaniklilik_Belirleme () override;
    void para_Belirleme () override;
    void saglik_Belirleme () override;
    void yakit_Belirleme () override;

};
#endif //PROJEDENEME1_NORMALGEMI_H
