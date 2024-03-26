//
// Created by Vojago on 2024/3/26.
//

#include "head.h"
#include <iostream>
#include <ctime>

int waiting()
{
    using namespace std;
    cout << "输入延迟时间（秒）：";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ;
    cout << "done \a\n";
    return 0;
}