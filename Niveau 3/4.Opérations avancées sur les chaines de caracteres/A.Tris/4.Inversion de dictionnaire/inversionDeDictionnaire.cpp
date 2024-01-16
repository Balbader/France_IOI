#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(void) {
	int nb;
	std::string tmp;
	std::vector<std::string> langs;
	std::string language;

	std::cin >> nb;
	std::cin.ignore();

	for (int i = 0; i < nb; i++) {

		std::getline(std::cin, tmp);

		std::istringstream iss(tmp);
		while (iss >> language)
			langs.push_back(language);

		std::cout << langs[i] << std::endl;
	}

	return (0);
}
