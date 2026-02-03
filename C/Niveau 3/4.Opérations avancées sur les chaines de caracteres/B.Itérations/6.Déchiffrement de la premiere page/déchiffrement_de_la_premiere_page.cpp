#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <ctype.h>

int getLetterPosition(char letter) {

    std::string lowerCaseAlphabet = "abcdefghijklmnopqrstuvwxyz";
    int pos = 0;

    // if letter is uppercase, convert it to lowercase
    if (isupper(letter)) {
        letter = tolower(letter);
    }

    int i = 0;
    while (lowerCaseAlphabet[i]) {
        if (letter == lowerCaseAlphabet[i])
            pos = i;
        ++i;
    }

    return pos;
}


int main() {

    std::string newAlphabet;
    std::string wordToDecrypt;

    std::getline(std::cin, newAlphabet);
    std::getline(std::cin, wordToDecrypt);

    int pos = 0;
    int i = 0;
    while (wordToDecrypt[i]) {
        if (isalpha(wordToDecrypt[i])) {
            pos = getLetterPosition(wordToDecrypt[i]);
            if (isupper(wordToDecrypt[i])) {
                char c = toupper(newAlphabet[pos]);
                std::cout << c;
            }
            else
                std::cout << newAlphabet[pos];
        } else {
            std::cout << wordToDecrypt[i];
        }
        ++i;
    }

    std::cout << "\n";

    return 0;
}
