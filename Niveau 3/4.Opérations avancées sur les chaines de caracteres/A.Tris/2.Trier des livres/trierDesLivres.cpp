#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

int main(void) {

	int nb;
	std::string tmp;
	std::vector<std::string> titles;

	std::cin >> nb;
	std::cin.ignore();

	for (int i = 0; i < nb; i++) {
		std::getline(std::cin, tmp);
		titles.push_back(tmp);
	}

	std::sort(titles.begin(), titles.end());

	for (const auto &title : titles) {
		std::cout << title << std::endl;
	}

	return (0);
}
