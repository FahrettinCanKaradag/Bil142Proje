//
// Created by CAN on 14.03.2024.
//

#include<iostream>

#include "../inc/Gemi.h"

bool Gemi::GemiOlduMu ()
{
    if(yakit>0)
    {
        if(saglik>0)
        {


            return false;
        }
        else{
            return true;
        }
    }
    else
    {
        return true;
    }

}



int Gemi::yakitOgrenme() const {
    return yakit;
}
int Gemi::ParaOgrenme() const {
    return para;
}
int Gemi::saglikOgrenme() const  {
    return saglik;
}
void Gemi::saglikGuncelleme(int alinanHasar) {
    if (saglik - static_cast<int>(alinanHasar/this->dayaniklilikKatsayisi) >= 0)
    {
        saglik -= static_cast<int>(alinanHasar/this->dayaniklilikKatsayisi);
    } else {
        this->GemiOlduMu();
    }
}


void Gemi:: yakitGuncelleme(int azalanYakit)
{
    if(yakit-azalanYakit*yakitAzalmaKatsayisi>0)
    {
        yakit -=static_cast<int>(yakitAzalmaKatsayisi*azalanYakit);
    }
    else
    {this->GemiOlduMu();}
}



void Gemi::paraGuncelleme(int ArtanAzalanPara)
{
    this-> para += ArtanAzalanPara; //eger pozitif girilirse artar negatif azalir
}

int Gemi::PuanHesaplama()
{
    const double PuanHesaplamaGemiSagligiKatSayisi{10.0};
    const double PuanHesaplamaKalanYakitKatSayisi{5.0};
    const double PuanHesaplamaKasadakiParaKatSayisi{10.0};

    int ToplamPuan= static_cast<int>((this->saglik)*PuanHesaplamaGemiSagligiKatSayisi+(this->yakit)*PuanHesaplamaKalanYakitKatSayisi+(this->para)*PuanHesaplamaKasadakiParaKatSayisi);

    return ToplamPuan;
}

