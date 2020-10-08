#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    print_nbr(int nb)
{
    if (nb >= 10)
        print_nbr(nb / 10);
    nb = nb % 10 + '0';
    putchar(nb);
}
int     main(void)
{
    int     i;
    int     bn_tot;

    i = 1;
    bn_tot = 0;
    while (i <= 50)
    {
        bn_tot += i;
        print_nbr(bn_tot);
        putchar ('\n');
        i++;
    }
    return (0);
}
