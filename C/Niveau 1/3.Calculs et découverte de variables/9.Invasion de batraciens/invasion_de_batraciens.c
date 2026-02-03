#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    print_nbr(int nb)
{
    if(nb >= 10)
        print_nbr(nb / 10);
    nb = nb % 10 + '0';
    putchar(nb);
}

int     main(void)
{
    int     c;
    int     tot;
    int     week;

    c = 1337;
    tot = 0;
    week = 12;
    while (week >= 1)
    {
        tot = c * 2;
        c = tot;
        week--;
    }
    print_nbr(tot);
    return (0);
}

