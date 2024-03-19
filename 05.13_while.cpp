//
// Created by Vojago on 2024/3/19.
//
#include "head.h"
#include <iostream>
const int ArSize = 20;
int while_main()
{
    using namespace std;
    char name[ArSize];
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
}