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

// Count the tot occurrence of each letter and return a vector
// representing the tot amount of occurrences of
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

	// count the tot amount of letters in the string
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
