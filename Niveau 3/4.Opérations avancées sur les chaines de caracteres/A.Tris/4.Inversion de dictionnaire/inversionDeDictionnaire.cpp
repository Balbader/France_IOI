#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string cpyFirstWd(std::string str) {

	std::string firstWd = new char[str.length() + 1];

	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == ' ') {
			firstWd[i] = '\0';
			return firstWd;
		}
		firstWd[i] = str[i];
	}
	return firstWd;
}

std::string cpySecondWd(std::string str) {

	std::string secondWd;

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
	std::vector<std::string> dictionary;
	std::string tmp;

	std::string firstWd;
	std::string secondWd;

	for (int i = 0; i < nb; ++i) {

		std::string str;
		std::getline(std::cin, str);

		firstWd = cpyFirstWd(str);
		secondWd = cpySecondWd(str);
		std::cout << firstWd << " " << secondWd << std::endl;
		// tmp = secondWd + " " + firstWd;
		// std::cout << "tmp: " << tmp << std::endl;
		dictionary.push_back(tmp);
	}

	// for (int i = nb - 1; i >= 0; --i) {
	// 	std::cout << dictionary[i] << std::endl;
	// }

	return 0;
}

