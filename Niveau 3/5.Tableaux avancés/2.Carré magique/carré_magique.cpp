#include <iostream>

int main()
{
	int v[100000] = {0};
	int size;
	std::cin >> size;
	std::cin.ignore();

	int grid[size][size];
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			std::cin >> grid[i][j];
		}
	}

	int sum = 0;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			sum += grid[i][j];
		}
	}

	if (sum % size != 0) {
		std::cout << "no" << std::endl;
		return 0;
	}

	sum /= size;
	for (int i = 0; i < size; ++i) {

		int s = 0;

		for (int j = 0; j < size; ++j) {
			s += grid[i][j];
		}

		if (s != sum) {
			std::cout << "no" << std::endl;
			return 0;
		}
	}

	for (int j = 0; j < size; ++j) {

		int s = 0;

		for (int i = 0; i < size; ++i) {
			s += grid[i][j];
		}

		if (s != sum) {
			std::cout << "no" << std::endl;
			return 0;
		}
	}

	int s1 = 0;
	int s2 = 0;

	for (int i = 0; i < size; ++i) {
		s1 += grid[i][i];
		s2 += grid[i][size - i - 1];
	}

	if (s1 != sum || s2 != sum) {
		std::cout << "no" << std::endl;
		return 0;
	}

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (grid[i][j] >= 1 && grid[i][j <= size * size]) {
				v[grid[i][j]]++;
			}
		}
	}

	for (int i = 1; i <= size * size; ++i) {
		if (v[i] != 1) {
			std::cout << "no" << std::endl;
			return 0;
		}
	}
	std::cout << "yes" << std::endl;
	return 0;
}
