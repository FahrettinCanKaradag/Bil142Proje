//
// Created by CAN on 14.03.2024.
//

#ifndef INC_142ROJE_CYOLOG_GEMIGENERATOR_H
#define INC_142ROJE_CYOLOG_GEMIGENERATOR_H
#include "../inc/Gemi.h"
#include"../inc/EventGenerator.h"






class GemiGenerator

{
public:
    GemiGenerator();

protected:

    const int toplamGemiTuru{3};

    void GemiGeneratorKullaniciIleIletisimKuracakFonksiyon();

    void GemiGeneratorGemiGenerateEdecekFonksiyon(int);

    void GemiGeneratorileEventGenerateEdenFonksiyon(std::shared_ptr<Gemi>);



};

#endif //INC_142ROJE_CYOLOG_GEMIGENERATOR_H
