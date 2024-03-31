//
// Created by Vojago on 2024/3/31.
//
#include <iostream>
#include <string>
int O5_06()
{
    using namespace std;
    string month[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    int sell[3][12] = {0};
    int sells[3] = {0};
    int total_sells = 0;
    for (int i = 0 ; i < 3 ; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << "请输入第 " << i + 1 << " 年 " << month[j] << " 的销售量：";
            cin >> sell[i][j];
            sells[i] += sell[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        cout << "第 " << i + 1 << " 年销售量为: "<< sells[i] << endl;
        for (int j=0; j < 12; ++j) {
            cout << month[j] << ": " << sell[i][j] << endl;
        }
        total_sells += sells[i];
    }
    cout << "三年的总销售量为: " << total_sells << endl;
    return 0;
}