//
// Created by Vojago on 2024/3/31.
//
#include <iostream>
#include <cstring>

int O5_08()
{
    using namespace std;
    int word_count = 0;
    char word[20] = {'0'};
    cout << "Enter a word (type 'done' to stop the program.): \n";
    do {
        cin >> word;
        if (strcmp(word, "done") != 0) {
            word_count++;
        }
    } while (strcmp(word, "done") != 0);
    cout << "\nYou entered a total of " << word_count << " words." << endl;
    return 0;
}