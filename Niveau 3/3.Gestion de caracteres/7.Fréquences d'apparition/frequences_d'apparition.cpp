#include <iostream>
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

    std::vector<int> letter_count(26, 0);

    for (char ch : text) {
        if (std::isalpha(ch)) {
            letter_count[std::tolower(ch) - 'a']++;
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
    std::cout << "Letter count :" << letterCount << std::endl;

    std::vector<int> totLetterOccurrences = countEachLetter(text);
    char c = 'a';
	float tmp;
    std::cout << "\ntotLetterOccurrences:" << std::endl;
    for (int occurrence :  totLetterOccurrences) {
		tmp = (static_cast<float>(occurrence) / static_cast<float>(letterCount));
		std::cout << tmp << std::endl;
        ++c;
    }

    return 0;
}
