#include <iostream>
#include <vector>
#include <string>
#include <cctype> // for std::tolower

std::vector<int> count_letters(const std::string& text) {
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
    std::string text = "Hello, World!";
    std::vector<int> result = count_letters(text);

    // Print the results
    for (int count : result) {
        std::cout << count << " ";
    }

    return 0;
}