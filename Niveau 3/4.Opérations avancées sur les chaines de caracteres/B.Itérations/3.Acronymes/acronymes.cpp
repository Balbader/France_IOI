#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <vector>

std::string toLowercase(std::string str) {
    for (char &c : str) {
        c = std::tolower(c);
    }
    return str;
}

int countWords(const std::string& str) {
    std::istringstream iss(str);
    int count = 0;
    std::string word;

    while (iss >> word) {
        count++;
    }

    return count;
}

int main() {

    std::string ref;
    // int nbOfTitles;
    std::string tmp;
    int wdCount;

    std::getline(std::cin, ref);
    std::getline(std::cin, tmp);

    wdCount = countWords(tmp);
    std::cout << wdCount << std::endl;

    std::cout << ref.length() << std::endl; 

    return 0;
}
