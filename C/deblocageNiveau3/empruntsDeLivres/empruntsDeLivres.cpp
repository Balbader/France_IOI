#include <iostream>
#define N 1024

int main()
{
    int refs[N]={0};
    int nbOfBooks;
    int days;
    int clients;
    int index;
    int duree;

    std::cin >> nbOfBooks;
    std::cin >> days;

    for(int i = 1; i <= days; ++i)
    {
        std::cin >> clients;

        for(int j = 0; j < clients; ++j)
        {
            std::cin >> index;
            std::cin >> duree;

            if(refs[index] <= i)
            {
                std::cout << 1 << std::endl;
                refs[index] = i + duree;
            }
            else
                std::cout << 0 << std::endl;
        }
    }
   return 0;
}
