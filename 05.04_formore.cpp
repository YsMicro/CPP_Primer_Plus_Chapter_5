//
// Created by Vojago on 2024/3/15.
//

#include <iostream>
#include "head.h"

const int ARSIZE = 16;
int formore()
{
    long long factorials[ARSIZE];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ARSIZE; ++i)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ARSIZE; ++i)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}
