//
// Created by MUHAMMAD ZEESHAN ASLAM on 27/06/2018.
//

#ifndef COUNTUPNDK_COUNTING_H
#define COUNTUPNDK_COUNTING_H

#include <iostream>

using namespace std;


class Counting {
    int counter;
    static Counting *s_instance;

public:
    Counting();
    int getCounter();
    void addCounter();
    static Counting *instance();
};


#endif //COUNTUPNDK_COUNTING_H
