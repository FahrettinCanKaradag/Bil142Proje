//
// Created by Hayrullah on 3/6/2024.
//

#ifndef PROJEDENEME1_GEMI_H
#define PROJEDENEME1_GEMI_H
#include <iostream>
class Gemi {
public:
    int saglik{100};
    int yakit{100};
    int para{0};
    int dayaniklilik{1};
    int hiz{1};
    int defaultAzalanYakit{33};
    float hizKatsayisi{1.0};
    float saglikKatsayisi{1.0};
    float yakitKatsayisi{1.0};
    float dayaniklilikKatsayisi{1.0};
    float yakitAzalmaKatsayisi{1.0};


    virtual void hiz_Belirleme  () =0 ;
    virtual void dayaniklilik_Belirleme ()=0 ;
    virtual void para_Belirleme ()=0 ;
    virtual void saglik_Belirleme ()=0 ;
    virtual void yakit_Belirleme ()=0 ;

public:
    [[nodiscard]] int yakitOgrenme () const;
    [[nodiscard]] int saglikOgrenme() const;
    [[nodiscard]] int ParaOgrenme() const;
    void paraGuncelleme(int);
    void yakitGuncelleme(int);
    void saglikGuncelleme(int);
    bool GemiOlduMu() ;
    int PuanHesaplama ();




};
#endif //PROJEDENEME1_GEMI_H
