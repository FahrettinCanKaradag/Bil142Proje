//
// Created by CAN on 14.03.2024.
//

#include <iostream>
#include "../inc/NormalGemi.h"


NormalGemi::NormalGemi() {
    this-> hiz_Belirleme();
    this->dayaniklilik_Belirleme();
    this->yakit_Belirleme();
    this->saglik_Belirleme();
    this->para_Belirleme();

}
void NormalGemi::hiz_Belirleme( ) {

    this-> hizKatsayisi=1.0;
    this->hiz=  static_cast<int>(this->hiz*this->hizKatsayisi);

}

void NormalGemi::yakit_Belirleme() {

    this-> yakitKatsayisi=1.0;
    this->yakit=static_cast<int>(this->yakit*this->yakitKatsayisi)  ;
}

void NormalGemi::saglik_Belirleme() {

    this->saglikKatsayisi=1.0;
    this->saglik=static_cast<int>(this->saglik*this->saglikKatsayisi);
}


void NormalGemi::para_Belirleme()
{

    this->para=0;

}

void NormalGemi::dayaniklilik_Belirleme()
{
    this-> dayaniklilikKatsayisi=1.0;
    this->dayaniklilik=static_cast<int>(this->dayaniklilik* this->dayaniklilikKatsayisi);
}
