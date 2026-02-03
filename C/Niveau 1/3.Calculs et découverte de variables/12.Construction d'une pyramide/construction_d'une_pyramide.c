#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    print_nb(int nb)
{
    if (nb >= 10)
        print_nb(nb / 10);
    nb = nb % 10 + '0';
    putchar (nb);
}

int     main(void)
{
    int     cube;
    int     tot_cube;
    
    cube = 17;
    tot_cube = 0;
    while (cube >= 1)
    {
        tot_cube  += cube * cube * cube;
        cube = cube - 2;
    }
    print_nb(tot_cube);
    return (0);
}
