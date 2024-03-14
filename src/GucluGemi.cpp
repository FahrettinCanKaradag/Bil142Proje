//
// Created by CAN on 14.03.2024.
//

#include "../inc/GucluGemi.h"


GucluGemi::GucluGemi() {
    this-> hiz_Belirleme();
    this->dayaniklilik_Belirleme();
    this->yakit_Belirleme();
    this->saglik_Belirleme();
    this->para_Belirleme();

}
void GucluGemi::hiz_Belirleme() {

    this-> hizKatsayisi={0.5};
    this-> hiz=  static_cast<int>(this->hiz* this->hizKatsayisi);

}

void GucluGemi::yakit_Belirleme() {

    this-> yakitKatsayisi={1.0};
    this-> yakit=static_cast<int>(this->yakit*this->yakitKatsayisi)  ;
}

void GucluGemi::saglik_Belirleme() {

    this->saglikKatsayisi=1.0;
    this->saglik=static_cast<int>(this->saglik*this->saglikKatsayisi);
}


void GucluGemi::para_Belirleme() {
    this->para=0;
}

void GucluGemi::dayaniklilik_Belirleme()
{
    this->dayaniklilikKatsayisi=1.5;
    this->dayaniklilik=static_cast<int>(this->dayaniklilik*this->dayaniklilikKatsayisi);
}
