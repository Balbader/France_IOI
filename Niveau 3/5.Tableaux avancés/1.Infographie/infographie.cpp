#include <iostream>

void printChar(int l1, int c1, int l2, int c2, char c, int j) {
  if (j >= l1 && j <= l2 && j >= c1 && j <= c2)
    std::cout << c;
  else
    std::cout << ".";
}

int main() {

  int lines;
  int col;
  int rectangles;

  int l1, c1, l2, c2;

  char c;

  std::cin >> lines >> col;
  std::cin >> rectangles;
  std::cin.ignore();

  char grid[lines][col];

  for (int i = 0; i < rectangles; i++) {

    std::cin >> l1 >> c1 >> l2 >> c2 >> c;

    for (int i = 0; i < lines; i++) {
      for (int j = 0; j < col; j++) {
        if (j >= l1 && j <= c1 && j >= l2 && j <= c2)
          // grid[i][j] = c;
          std::cout << c;
        else
          std::cout << '.';
        // grid[i][j] = '.';
      }
      std::cout << std::endl;
    }
  }

  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < col; j++) {
      std::cout << grid[i][j];
    }
    std::cout << std::endl;
  }
  return 0;
}
