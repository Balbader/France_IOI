#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

bool isGreater(std::string s1, std::string s2) {
	return (s1 > s2);
}

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


	tmp = titles[0];
	for (int i = 0; i < nb; i++) {
		if (tmp <= titles[i]) {
			std::cout << titles[i] << std::endl;
			tmp = titles[i];
			i++;
		}
	}

	return (0);
}
