//
// Created by Vojago on 2024/3/28.
//
#include "head.h"
#include <iostream>
int textin3()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (!cin.fail())
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}