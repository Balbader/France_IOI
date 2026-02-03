#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>

std::string toUpperCase(std::string str) {
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	} 
	return str;
}

std::string removeSpaces(std::string str) {
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
	return str;
}

bool strCmp(std::string s1, std::string s2) {
	int count = 0;

	for (int i = 0; i < s1.length(); ++i) {
		if (s1[i] == s2[i])
			++count;
	}

	if (count == s1.length())
		return 1;
	else
		return 0;
}

std::string copyBackwards(std::string src, std::string dst) {

	// resize dst to src length including the '\0'
	dst.resize(src.length());

	int j = 0;
	int i = src.length() - 1;

	while (i >= 0) {
		dst[j] = src[i];
		j++;
		i--;
	}
	return dst;
}

int main() {
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
		tmp = copyBackwards(titles[i], tmp);
		titlesBackwards[i] = tmp;
	}

	for (int i = 0; i < nb; ++i) {
		if (strCmp(removeSpaces(toUpperCase(titles[i])), removeSpaces(toUpperCase(titlesBackwards[i]))) == 1)
			std::cout << titles[i] << std::endl;
	}

	return 0;
}
