#include <iomanip>
#include <iostream>
#include <cctype>
#include <string>
#include <vector>

int main(void) {

	int nb;
	std::string tmp;
	std::vector<std::string> titles;

	std::cin >> nb;
	std::cin.ignore();

	for (int i = 0; i <= nb; i++) {
		std::getline(std::cin, tmp);
		titles.push_back(tmp);
	}

	for (int i = nb; i >= 0; i--) {
		std::cout << titles[i] << std::endl;
	}

	return (0);
}
