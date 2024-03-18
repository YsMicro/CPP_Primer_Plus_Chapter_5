//
// Created by Vojago on 2024/3/19.
//
#include "head.h"
#include <iostream>
#include <cstring>

int compstr1()
{
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate") != 0; ++ch) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "循环结束后，word 是 " << word << endl;
    return 0;
}