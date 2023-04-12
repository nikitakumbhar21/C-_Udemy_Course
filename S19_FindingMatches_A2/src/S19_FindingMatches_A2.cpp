//============================================================================
// Name        : S19_FindingMatches_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : You are given an array containing std::string data and a key in
//				the form of a C-String. Your job is to find all the strings in the
//    			array that contain the key as a sub-string.
//============================================================================

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string data[] = {"apple", "banana", "orange", "pineapple", "grape"};
    const char* key = "app"; // the key to search for
    int n = sizeof(data) / sizeof(data[0]); // number of strings in the array

    int count = 0; // number of strings found containing the key

    cout << "Strings found containing \"" << key << "\":" << endl;
    for (int i = 0; i < n; i++)
    {
        if (data[i].find(key) != string::npos) //string::npos value is typically used to indicate the absence of a valid position or index within a string.
        {
            cout << data[i] << endl;
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No strings found containing \"" << key << "\"" << endl;
    }

    return 0;
}

