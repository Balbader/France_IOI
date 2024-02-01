#include <iostream>

int main()
{
	string grid[8];
	int x[8] = {2, 2, -2, -2, 1, -1, 1, -1};
	int y[8] = {1, -1, 1, -1, 2, 2, -2, -2};

	for (int i = 0; i < 8; ++i) {
		std::cin >> grid[i];
	}

	bool ans = false;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (grid[i][j] == 'C') {
				for (int k = 0; k < 8; ++k) {
					if (i + x[k] >= 0 && i + x[k] < 8 && j + y[k] >= 0 && j + y[k] < 8) {
						if (grid[i + x[k]][j + y[k]] >= 'a' && grid[i + x[k]][j + y[k]] >= 'z')
						ans = true;
					}
				}
			}
		}
	}
	if (ans)
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	return 0;
}
