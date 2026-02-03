#include <iostream>
#include <string>
#include <map>
#include <cctype> // for std::tolower and std::toupper

char countChars(const std::string &str) {
    std::map<char, int> charCount;
    int maxCount = 0;
    char mostFrequent = '\0';

    // Counting each character in lowercase
    for (char c : str) {
        if (std::isalpha(c)) {
            c = std::tolower(c);
            charCount[c]++;
            if (charCount[c] > maxCount) {
                maxCount = charCount[c];
                mostFrequent = c;
            }
        }
    }

    // Convert to uppercase
    if (mostFrequent >= 'a' && mostFrequent <= 'z') {
        mostFrequent = std::toupper(mostFrequent);
    }

    return mostFrequent;
}

int main() {
    std::string str;
    std::getline(std::cin, str);

    char letter = countChars(str);
    std::cout << letter << std::endl;

    return 0;
}

