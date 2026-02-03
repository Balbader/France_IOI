#include <iostream>

int main() {

    for (char c = 'A'; c <= 'Z'; c++) {
        std::cout << c;
        if (c != 'Z')
            std::cout << " ";
    }
    return 0;
}
