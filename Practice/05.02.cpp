//
// Created by Vojago on 2024/3/30.
//
#include <iostream>
#include <array>

const int ARSIZE = 101;
int O5_02()
{
    using namespace std;
    array<long double, ARSIZE>factorials = {0};
    factorials[0] = factorials[1] = 1LL;
    for (int i = 2; i < ARSIZE; ++i)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ARSIZE; ++i)
        cout << i << "! = " << factorials[i] << endl;
    return 0;
}