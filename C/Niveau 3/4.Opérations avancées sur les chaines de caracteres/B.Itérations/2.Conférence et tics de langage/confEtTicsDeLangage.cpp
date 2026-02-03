#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cctype>
#include <sstream>

std::string toLowercase(std::string str) {
    for (char &c : str) {
        c = std::tolower(c);
    }
    return str;
}

// Split text into an array of word tokens
std::vector<std::string> split(const std::string &str) {
    std::istringstream iss(str);
    std::vector<std::string> tokens;
    std::string token;

    while (iss >> token) {
        tokens.push_back(token);
    }

    return tokens;
}

int compareStrings(std::string s1, std::string s2) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int main() {

    std::string word;
    std::string text;
    std::vector<std::string> words;

    std::getline(std::cin, word);
    std::getline(std::cin, text);

    word = toLowercase(word);
    text = toLowercase(text);

    words = split(text);

    int count = 0;
    for (const std::string& token : words) {
        if (compareStrings(word, token) == 0)
            ++count;
    }

    std::cout << count << std::endl;
    return 0;
}
