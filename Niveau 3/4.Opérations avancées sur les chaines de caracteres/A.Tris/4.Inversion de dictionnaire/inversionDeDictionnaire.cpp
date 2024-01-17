#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string firstWD(std::string str) {

	std::string first;

	for (int i = 0; i < str.length(); ++i) {
		first[i] = str[i];
		if (str[i] == ' ') {
			first[i] = '\0';
			std::cout << "firstWD: " << first << std::endl;
			return first;
		}
	}
	return first;
}

std::string secondWD(std::string str) {

	std::string second;
	int j = 0;
	int i = 0;

	while (str[i] != ' ')
		++i;

	++i;

	while (str[i]) {
		second[j] = str[i];
		++i;
		++j;
	}

	std::cout << "secondWD: " << second << std::endl;
	return second;
}

int main(void) {

	int nb;
	std::cin >> nb;
	std::cin.ignore();

	for (int i = 0; i < nb; ++i) {

		std::string str;
		std::string first;
		std::string second;
		std::string tmp;

		std::getline(std::cin, str);
		// std::cout << str << std::endl;

		first = firstWD(str);
		// std::cout << "first : " << first << std::endl;

		second = secondWD(str);
		// std::cout << "second : " << second << std::endl;

		tmp = second + " " + first;
		std::cout << "tmp : " << tmp << std::endl;
	}

	return 0;
}
