//
// Created by Vojago on 2024/3/15.
//

#include "head.h"
#include <iostream>
#include <string>

int forstr1()
{
    using namespace std;
    cout << "输入一个单词：";
    string word;
    cin >> word;
    for (int i = word.size() - 1; i >= 0; --i)
        cout << word[i];
    cout << "\nBye.\n";
    return 0;
}