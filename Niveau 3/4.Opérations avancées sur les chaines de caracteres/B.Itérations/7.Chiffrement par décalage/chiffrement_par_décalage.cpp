#include <ctype.h>
#include <iostream>
#include <string>
#include <string.h>

#define N 26

int main() {

    std::string s, t, s1, s2;
    int n;
    int x;

    std::cin.tie(0);
    std::cin>>n;
    std::getline(std::cin,s);

    for(int t=2;t<=n;++t) {
        std::getline(std::cin,s);

        if (t % 2==0)
            x = t * 3;
        else
            x = -5 * t;

        for(unsigned int i = 0; i < s.length(); ++i) {
            if(s[i]>='a' && s[i]<='z') {
                std::cout << char((s[i] - 'a' - (x % N) + N) % N + 'a');
            }

            else if(s[i]>='A' && s[i]<='Z') {
                std::cout << char((s[i] - 'A' - (x % N) + N) % N + 'A');
            }

            else
                std::cout << s[i];
        }
        std::cout << std::endl;
    }
    return 0;
}
