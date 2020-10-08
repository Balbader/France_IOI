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
    putchar(nb);
}

int     main(void)
{
    int     i;
    int     base;
    int     table;

    base = 1;
    while (base <= 20)
    {
        i = 1;
        table = 0;
        while (i <= 20)
        {
            table = base * i;
            print_nb(table);
            putchar(' ');
            i++;
        }
        putchar('\n');
        base++;
        i++;
        table++;
    }
    return (0);
}
