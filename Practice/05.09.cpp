//
// Created by Vojago on 2024/3/31.
//
#include <iostream>
#include <string>

[[maybe_unused]] int O5_09()
{
    using namespace std;
    int word_count = 0;
    string word;
    cout << "Enter a word (type 'done' to stop the program.): \n";
    do {
        cin >> word;
        if (word != "done") {
            word_count++;
        }
    } while (word != "done");
    cout << "\nYou entered a total of " << word_count << " words." << endl;
    return 0;
}