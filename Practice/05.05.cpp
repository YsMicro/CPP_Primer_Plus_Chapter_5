//
// Created by Vojago on 2024/3/31.
//
#include <iostream>
#include <string>
int O5_05()
{
    using namespace std;
    string month[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    int sell[12] = {0};
    int sells = 0;
    for (int i = 0; i < 12; ++i) {
        cout << "请输入" << month[i] << " 的销售量：" << endl;
        cin >> sell[i];
        sells += sell[i];
    }
    cout << "本年销售量为：" << sells << endl;
    for (int i=0; i < 12; ++i) {
        cout << month[i] << ": " << sell[i] << endl;
    }
    return 0;
}