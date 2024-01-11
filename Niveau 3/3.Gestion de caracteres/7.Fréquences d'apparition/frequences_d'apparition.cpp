#include <iostream>
#include <vector>
#include <string>
#include <cctype>


// Count the total amount of letters in a given text
int countTotLetters(const std::string& text) {
    int letter_count = 0;

    // Iterate over each character in the text
    for (char c : text) {
        if (std::isalpha(c)) {
            // Increment the count for this letter
            letter_count++;
        }
    }

    return letter_count;
}

// Count the tot occurrence of each letter and return a vector representing the tot amount of occurrences of
// each letter of the alphabet in a given text
std::vector<int> countEachLetter(const std::string& text) {
    // Initialize a vector of 26 integers to store the counts for each letter (a-z)
    std::vector<int> letter_count(26, 0);

    // Iterate over each character in the text
    for (char ch : text) {
        if (std::isalpha(ch)) {
            // Increment the count for this letter
            // Convert char to lowercase and then to an index (0-25)
            letter_count[std::tolower(ch) - 'a']++;
        }
    }

    return letter_count;
}

int main() {

    // initialize a vector and fill it with alphabet letters
    std::vector<char> alphabet;
     for (char letter = 'a'; letter <= 'z'; letter++) {
        alphabet.push_back(letter);
    }

    std::string text;
    std::getline(std::cin, text);

    int letterCount = countTotLetters(text);
    std::vector<int> totLetterOccurrences = countEachLetter(text);
    std::vector<float> averageOccurrence(letterCount, 0);

    for (int i = 0; i < 26; ++i) {
        averageOccurrence[i] = static_cast<float>(totLetterOccurrences[i] / letterCount);
        std::cout << averageOccurrence[i] << std::endl;
    }
    return 0;
}