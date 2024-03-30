//
// Created by Vojago on 2024/3/31.
//
#include <iostream>
int O5_04()
{
    using namespace std;
    double daphne = 100;
    double cleo = 100;
    int i = 1;
    for (; cleo <= daphne ; ++i) {
    daphne += 10;
    cleo += cleo * 0.05;
    }
    cout << "第 " << i << " 年, Cleo 的资产超过 Daphne， 此时 Daphne: " << daphne <<
    " , Cleo: " << cleo << endl;
    return 0;
}