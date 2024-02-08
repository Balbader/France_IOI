#include <iostream>

int MIN(int a, int b)
{
    return (a > b) ? b : a;
}

int main()
{
    int n;
    std::cin >> n;

    for(int i = 1; i <= 2 * n - 1; ++i)
    {
        for(int j = 1; j <= 2 * n - 1; ++j)
        {
            int x = MIN(2 * n - i, i);
            int y = MIN(2 * n - j, j);

            x = MIN(x, y);

            std::cout << (char)('a' + x - 1);
        }

        std::cout << std::endl;
    }

    return 0;
}
