//
// Created by Vojago on 2024/3/14.
//

#include <iostream>
#include "head.h"

int express()
{
    using namespace std;
    int x;

    cout << "表达式 x = 100 的值为 ";
    cout << ( x = 100) << endl;
    cout << "现在 x = " << x << endl;
    cout << "表达式 x < 3 的值为 ";
    cout << (x < 3) << endl;
    cout << "表达式 x > 3 的值为 ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << "表达式 x < 3 的值为 ";
    cout << (x < 3) << endl;
    cout << "表达式 x > 3 的值为 ";
    cout << (x > 3) << endl;
    return 0;
}