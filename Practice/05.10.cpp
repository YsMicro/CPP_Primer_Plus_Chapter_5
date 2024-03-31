//
// Created by Vojago on 2024/3/31.
//
#include <iostream>

int O5_10()
{
    using namespace std;
    cout << "请输入数字:";
    int count;
    cin >> count;
    for (int i = 1; i <= count; ++i) {
        for (int j = 0; j < count - i; ++j) {
            cout << ".";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}