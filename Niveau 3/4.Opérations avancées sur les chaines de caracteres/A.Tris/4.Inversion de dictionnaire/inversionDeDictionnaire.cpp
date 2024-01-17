#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <array>

char* firstWD(std::string str) {

	char* first = new char[str.length() + 1];

	for (unsigned int i = 0; i < str.length(); ++i) {
		first[i] = str[i];
		if (str[i] == ' ') {
			first[i] = '\0';
			return first;
		}
	}

	return first;
}

char* secondWD(std::string str) {

	char* second = new char[str.length() + 1];
	unsigned int j = 0;
	unsigned int i = 0;

	while (str[i] != ' ')
		++i;

	++i;

	while (str[i]) {
		second[j] = str[i];
		++i;
		++j;
	}
	second[j] = '\0';

	return second;
}

int main(void) {

	int nb;
	std::cin >> nb;
	std::cin.ignore();

	std::string dictionnary[nb];

	for (int i = 0; i < nb; ++i) {

		std::string str;
		std::string first;
		std::string second;
		std::string tmp;

		std::getline(std::cin, str);

		first = firstWD(str);
		second = secondWD(str);
		tmp = second + " " + first;
		dictionnary[i] = tmp;
	}

	for (int i = nb - 1; i >= 0; --i) {
		std::cout << dictionnary[i] << std::endl;
	}

	return 0;
}
