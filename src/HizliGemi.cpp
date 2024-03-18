//
// Created by Hayrullah on 3/6/2024.
//


#include "../inc/HizliGemi.h"

HizliGemi::HizliGemi(){
    this-> hiz_Belirleme();
    this->dayaniklilik_Belirleme();
    this->yakit_Belirleme();
    this->saglik_Belirleme();
    this->para_Belirleme();
}

void HizliGemi::hiz_Belirleme() {

    this->hizKatsayisi={1.5};
   this-> hiz=  static_cast<int>(this->hiz*this->hizKatsayisi);

}

void HizliGemi::yakit_Belirleme() {

    this->yakitKatsayisi={1.0};
    yakit=static_cast<int>(yakit*yakitKatsayisi)  ;
}

void HizliGemi::saglik_Belirleme() {

    this->saglikKatsayisi={1.0};
   this-> saglik=static_cast<int>(this->saglik*saglikKatsayisi);
}


void HizliGemi::para_Belirleme() {
    this->para=0;
}

void HizliGemi::dayaniklilik_Belirleme()
{
    this->dayaniklilikKatsayisi=0.5;
    this->dayaniklilik=static_cast<int>(this->dayaniklilik*this->dayaniklilikKatsayisi);
}
