//
// Created by CAN on 14.03.2024.
//

#include"../../Proje/inc/Event.h"
#include <iostream>




Event::Event(std::shared_ptr<Gemi> SecilenGemi)
{

    BuGemi=std::move(SecilenGemi);

}
