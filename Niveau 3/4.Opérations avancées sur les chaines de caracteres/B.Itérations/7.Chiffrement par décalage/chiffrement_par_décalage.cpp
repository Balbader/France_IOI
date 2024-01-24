#include <ctype.h>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>

int main() {

    int nbOfPages;
    std::string newPage;

    std::cin >> nbOfPages;
    std::cin.ignore();

    for (int i = 1; i <= nbOfPages; i++) {

        std::getline(std::cin, newPage);

        if (i % 2 == 0) {

            int j = 0;

            while (newPage[j]) {
                if (isalpha(newPage[j])) {
                    char c = newPage[j] - (i * 3);
                    std::cout << c;
                }
                ++j;
            }

        } else if (i % 2 != 0) {

            int j = 0;

            while (newPage[j]) {
                if (isalpha(newPage[j])) {
                    char c = newPage[j] + (i * -5);
                    std::cout << c;
                }
                ++j;
            }
        }
    }
    return 0;
}
