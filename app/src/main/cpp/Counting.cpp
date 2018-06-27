//
// Created by MUHAMMAD ZEESHAN ASLAM on 27/06/2018.
//

#include "Counting.h"


Counting::Counting() {
    counter = 0;
}

int Counting::getCounter() {
    return counter;
}

void Counting::addCounter() {
    counter++;
}

Counting *Counting::instance() {
    if(!s_instance)
        s_instance = new Counting;

    return s_instance;
}


