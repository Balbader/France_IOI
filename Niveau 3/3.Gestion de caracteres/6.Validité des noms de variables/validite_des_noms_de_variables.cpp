// if 1st letter != a/z || A/Z || _ = false
// if any letter after != a/z || A/Z || _ || number = false

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// checks if all the characters are ok
bool firstCheck(std::string str) {
	for (int i = 0; i < str.length(); ++i) {
		if (! ((str[i] != '_') || (isalpha(str[i])) || (str[i] >= '0' && str[i] <= '9')))
			return 1;
	}
	return 0;
}

int main(void) {
	int nb;
	std::cin >> nb;
	std::cin.ignore();

	std::vector<std::string> titles;
	std::vector<std::string> titlesBackwards(nb);

	for (int i = 0; i < nb; ++i) {
		std::string tmp;
		std::string title;
		std::getline(std::cin, title);
		titles.push_back(title);
	}

	return 0;
}
