//
// Created by Vojago on 2024/3/26.
//
#include "head.h"
#include <iostream>
int dowhile()
{
    using namespace std;
    int n;
    cout << "输入1-10之间的数字来寻找";
    cout << "我最喜欢的数字\n";
    do {
        cin >> n;
    } while (n != 7);
    cout << "没错，7是我最喜欢的数字。\n";
    return 0;
}