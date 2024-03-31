//
// Created by Vojago on 2024/3/31.
//
#include <iostream>
#include <string>
using namespace std;
int O5_07()
{
    struct Car{
        string maker = "0";
        int year = 0;
    };
    cout << "你有几辆车？" << endl;
    int i;
    cin >> i;
    cin.get();
    Car *cars = new Car[i];
    for (int j = 0; j < i; ++j) {
        cout << "Car #" << j + 1 << endl;
        cout << "请输入制造商:";
        getline(cin, cars[j].maker);
        cout << "请输入生产年份:";
        cin >> (cars+j)->year;
        cin.get();
    }
    cout << "你的收藏:\n";
    for (int j = 0; j < i; ++j) {
        cout << cars[j].year << " " << cars[j].maker << endl;
    }
    delete[] cars;
    return 0;
}

