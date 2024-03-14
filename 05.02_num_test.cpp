//
// Created by Vojago on 2024/3/14.
//

#include "head.h"
#include <iostream>

int num_test()
{
    using namespace std;
    cout << "键入起始终止值：";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i ; --i) {
        cout << "i = " << i << "\n";
    }
    cout << "结束时 i = " << i << "\n";
    return 0;
}