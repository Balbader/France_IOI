#include <iostream>

int main()
{

    int lines;
    int col;
    // int totRectangles;

    // int l1, c1, l2, c2;

    std::cin >> lines;
    std::cin >> col;

    char grid[lines][col];

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < col; j++) {
            grid[i][j] = '.';
            // std::cout << grid[i][j];
        }
        // std::cout << std::endl;
    }
    return 0;
}
