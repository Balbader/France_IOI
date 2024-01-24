#include <iostream>

int main() {
    for (char c = 'b'; c <= 'z'; c++) {

        if (c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            c++;

        std::cout << c;

        if (c != 'z')
            std::cout << ' ';
    }
    return 0;
}
