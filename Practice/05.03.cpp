//
// Created by Vojago on 2024/3/30.
//
#include <iostream>

int O5_03()
{
    using namespace std;
    double result = 0;
    double i = 1;
    do {
/*        if (i == 0){
            break;
        }*/
        cout << "输入一个数字(输入 0 以退出)：";
        cin >> i;
        result += i;
        cout << "所有输入的累计和为：" << result << endl;
    } while (i != 0);
    return 0;
}