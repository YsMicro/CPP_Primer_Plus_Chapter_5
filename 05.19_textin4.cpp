//
// Created by Vojago on 2024/3/28.
//
#include "head.h"
#include <iostream>
int textin4()
{
    using namespace std;
    int ch;
    int count = 0;
    while ((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}