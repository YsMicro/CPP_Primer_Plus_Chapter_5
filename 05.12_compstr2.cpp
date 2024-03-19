//
// Created by Vojago on 2024/3/19.
//
#include "head.h"
#include <iostream>
#include <string>

int compstr2()
{
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "循环结束后，word 是 " << word << endl;
    return 0;
}