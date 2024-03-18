//
// Created by Hayrullah on 3/7/2024.
//
#include"../inc/Event.h"
#include <iostream>




Event::Event(std::shared_ptr<Gemi> SecilenGemi)
{
    BuGemi=std::move(SecilenGemi);
}


