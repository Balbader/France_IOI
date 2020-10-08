#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        putchar(str[i]);
        i++;
    }
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
    char    *str;

    i = 1;
    str = "J'arrive !";
    while (i <= 100)
    {
        print_nbr(i);
        putchar('\n');
        i++;
    }
    putstr(str);
    putchar('\n');
    return (0);
}
