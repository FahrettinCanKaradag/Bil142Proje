//
// Created by Hayrullah on 3/10/2024.
//

#ifndef PROJEDENEME1_GEMIGENERATOR_H
#define PROJEDENEME1_GEMIGENERATOR_H
#include "../inc/Gemi.h"
#include"../inc/EventGenerator.h"






class GemiGenerator

{
public:
    GemiGenerator();

   protected:
    int KacKereEventCagrilacak{5};
     const int toplamGemiTuru{3};

     void GemiGeneratorKullaniciIleIletisimKuracakFonksiyon();

    void GemiGeneratorGemiGenerateEdecekFonksiyon(int);

    void GemiGeneratorileEventGenerateEdenFonksiyon(std::shared_ptr<Gemi>);



};


#endif //PROJEDENEME1_GEMIGENERATOR_H
