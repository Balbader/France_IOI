#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cctype>

int countTotLetters(const std::string& text) {

    int letter_count = 0;

    for (char c : text) {
        if (std::isalpha(c)) {
            letter_count++;
        }
    }

    return letter_count;
}

std::vector<int> countEachLetter(const std::string& text) {

    std::vector<int> letter_count(26);

    for (char c : text) {
        if (std::isalpha(c)) {
            letter_count[std::tolower(c) - 'a']++;
        }
    }

    return letter_count;
}

int main() {

    std::vector<char> alphabet;
     for (char letter = 'a'; letter <= 'z'; letter++) {
        alphabet.push_back(letter);
    }

    std::string text;
    std::getline(std::cin, text);

    int letterCount = countTotLetters(text);
    std::vector<int> totLetterOccurrences = countEachLetter(text);

    char c = 'a';
	double tmp;
    for (int occurrence :  totLetterOccurrences) {
		tmp = (static_cast<double>(occurrence) / static_cast<double>(letterCount));
		std::cout << std::fixed << std::setprecision(6) << tmp << std::endl;
        ++c;
    }

    return 0;
}
