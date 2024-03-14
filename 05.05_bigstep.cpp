//
// Created by Vojago on 2024/3/15.
//

#include "head.h"
#include <iostream>

int bigstep()
{
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "输入一个整数：";
    int by;
    cin >> by;
    cout << "步长为 " << by << " 计数：\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    return 0;
}