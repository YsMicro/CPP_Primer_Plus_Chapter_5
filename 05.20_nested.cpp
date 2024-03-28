//
// Created by Vojago on 2024/3/28.
//
#include "head.h"
#include <iostream>
const int CITY = 5;
const int YEAR = 4;
int nested()
{
    using namespace std;
    const char * cities[CITY] = {
            "Gribble City",
            "Gribble town",
            "New Gribble",
            "San Gribble",
            "Gribble Vista"
    };
    int maxTemps[YEAR][CITY] = {
            {96, 100, 87, 101, 105},
            {96, 98, 91, 107, 104},
            {97, 101, 93, 108, 107},
            {98, 103, 95, 109, 108}
    };
    cout << "2008 - 2011最高气温\n\n";
    for (int city = 0; city < CITY; ++city) {
        cout << cities[city] << ":\t";
        for (auto & maxTemp : maxTemps)
            cout << maxTemp[city] << "\t";
        cout << endl;
    }
//    cin.get();
    return 0;
}