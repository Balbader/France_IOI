#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    print_nbr(int nb)
{
    if (nb < 0)
    {
        putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        print_nbr(nb / 10);
    nb = nb % 10 + '0';
    putchar(nb);
}

int     main(void)
{
    print_nbr(42);
    write(1, "\n", 1);
    return (0);
}
