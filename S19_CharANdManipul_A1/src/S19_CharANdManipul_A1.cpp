//============================================================================
// Name        : S19_CharANdManipul_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : You are given an array of characters.
//			For example : char message[] {"John was 8 years old at the time."};
//			and your job is to figure out how many vowels and how many consonants there are in the string.
//============================================================================

#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    char message[] = "John was 8 years old at the time.";
    int vowel_count = 0, consonant_count = 0;

    for (int i = 0; i < strlen(message); i++) {

        if (isalpha(message[i]))
        {
            char c = tolower(message[i]); // convert to lowercase for easier comparison
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowel_count++;
            }
            else
            {
                consonant_count++;
            }
        }
    }
    std::cout << "The string contains " << vowel_count << " vowels and "
        << consonant_count << " consonants";
}
