//
// Created by Vojago on 2024/3/30.
//
#include "..\head.h."
#include <iostream>
int _05_01()
{
    using namespace std;
    cout << "输入一个整数：";
    int a;
    cin >> a;
    cout << "再输入一个整数：";
    int b;
    cin >> b;
    int result = 0;
    for (int i = a; i <= b ; ++i) {
        result += i;
    }
    cout << a << " 和 " << b << " 之间所有整数的和为 " << result;
    return 0;
}