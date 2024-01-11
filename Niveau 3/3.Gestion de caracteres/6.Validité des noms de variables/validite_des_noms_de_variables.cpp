// if 1st letter != a/z || A/Z || _ = false
// if any letter after != a/z || A/Z || _ || number = false

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// checks if all the characters are ok
bool checkFirstChar(std::string str) {

	if (!(str[0] == '_' || isalpha(str[0])))
		return 1;
	else
		return 0;
}

// checks if the remaining characters are ok
bool checkStr(std::string str) {

	int i = 1;

	while (str[i]) {
		if ((str[i] == '_' || isalpha(str[i]) ||  isalnum(str[i])))
			++i;
		else
			return 1;
		++i;
	}

	return 0;
}

int main(void) {
	int nb;
	std::cin >> nb;
	std::cin.ignore();

	std::vector<std::string> titles;

	for (int i = 0; i < nb; ++i) {
		std::string title;
		std::getline(std::cin, title);
		titles.push_back(title);
	}

	for (int i = 0; i < nb; ++i) {
		if (checkFirstChar(titles[i]) == 1 
			|| (checkStr(titles[i]) == 1)
			|| (checkFirstChar(titles[i]) == 1 && checkStr(titles[i]) == 1)
			|| titles[i] == "\0")
			std::cout << "NO" << std::endl;
		else
			std::cout << "YES" << std::endl;
	}

	return 0;
}
