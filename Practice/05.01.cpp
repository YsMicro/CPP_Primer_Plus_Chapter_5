//
// Created by Vojago on 2024/3/30.
//
#include <iostream>

int O5_01() {
    using namespace std;
    cout << "输入一个整数：";
    int a;
    cin >> a;
    cout << "再输入一个整数：";
    int b;
    cin >> b;

    if (a > b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    int result = 0;
    if (a == b){
        result = a + b;
    } else{
        int i = a;
        do {
            result += i;
            i++;
        } while (i <= b);
    }

    cout << a << " 和 " << b << " 之间所有整数的和为 " << result;
    return 0;
}
