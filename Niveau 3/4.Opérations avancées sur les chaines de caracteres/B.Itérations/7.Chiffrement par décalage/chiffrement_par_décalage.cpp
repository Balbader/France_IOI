#include <ctype.h>
#include <iostream>
#include <string>
#include <string.h>

int main() {

    int nbOfPages = 0;
    std::string newPage;

    std::cin >> nbOfPages;

    for (int i = 1; i <= nbOfPages; i++) {

        std::getline(std::cin, newPage);

        int j = 0;
        while (newPage[j]) {

            if (isalpha(newPage[j])) {

                if (i % 2 == 0) {
                    char c = newPage[j] - (i * 3);
                    std::cout << c;
                }

                else if (i % 2 != 0) {
                    char c = newPage[j] + (i * -5);
                    std::cout << c;
                }
            }
            
            else {
                std::cout << newPage[j];
            }
            ++j;
        }

        std::cout << "\n";
    }
    return 0;
}
