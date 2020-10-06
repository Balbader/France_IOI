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
    int     tot_stud;
    int     candy;

    tot_stud = 25 + 30 + 27 + 22 - 8;
    candy = tot_stud * 3;
    print_nbr(candy);
    return (0);
}

