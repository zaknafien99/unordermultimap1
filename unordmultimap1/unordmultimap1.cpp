// unordmultimap1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include "buckets.h"
using namespace std;

int main()
{
    // create and initialize an unordered multimap as dictionary
    std::unordered_multimap<string, string> dict = {
        {"day", "Tag"},{"strange","fremd"},
        {"car","Auto"},
        {"smart","elegant"},
        {"trait","Merkmal"},
        {"strange","seltsam"}
    };
    printHashTableState(dict);
    // insert some additional values (might cause rehashing)
    dict.insert({ {"smart","raffiniert"},
    {"smart","klug"},
    {"clever","raffiniert"}
        });
    printHashTableState(dict);
    // modify maximum load factor (might cause rehashing)
    dict.max_load_factor(0.7);
    printHashTableState(dict);


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
