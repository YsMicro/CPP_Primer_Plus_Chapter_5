//
// Created by Vojago on 2024/3/15.
//

#include <iostream>
#include "head.h"

int plus_one()
{
    using std::cout;
    using std::endl;
    int a = 20;
    int b = 20;
    cout << "a   = " << a << ":   b = " << b << endl;
    cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
    cout << "a   = " << a << ":   b = " << b << endl;
    return 0;
}