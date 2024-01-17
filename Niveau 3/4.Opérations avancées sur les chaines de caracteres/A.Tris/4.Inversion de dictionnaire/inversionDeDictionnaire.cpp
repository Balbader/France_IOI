#include <iostream>
#include <sstream>
#include <string>
#include <vector>

char* cpyFirstWd(std::string str) {

	char* firstWd = new char[str.length() + 1];

	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == ' ') {
			firstWd[i] = '\0';
			return firstWd;
		}
		firstWd[i] = str[i];
	}
	return firstWd;
}

char* cpySecondWd(std::string str) {

	char* secondWd = new char[str.length() + 1];

	int i = 0;
	while (str[i] != ' ') {
	  	++i;
	}

	++i;

	int j = 0;
	while (str[i]) {
		secondWd[j++] = str[i++];
	}
	secondWd[j] = '\0';
	return secondWd;
}

int main(void) {

	int nb;
	std::cin >> nb;
	std::cin.ignore();

	char* firstWd;
	char* secondWd;

	for (int i = 0; i < nb; ++i) {

		std::string str;
		std::getline(std::cin, str);

		firstWd = cpyFirstWd(str);
		secondWd = cpySecondWd(str);

		std::cout << secondWd << " " << firstWd << std::endl;
	}

	delete[] firstWd;
	delete[] secondWd;

	return 0;
}

