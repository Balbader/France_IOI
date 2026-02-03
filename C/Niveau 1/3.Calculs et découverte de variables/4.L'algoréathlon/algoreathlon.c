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
    int     day1;
    int     day2;
    int     day3;

    day1 = 42;
    day2 = day1 * 2;
    day3 = day2 + day1;
    print_nbr(day1);
    putchar(' ');
    print_nbr(day2);
    putchar(' ');
    print_nbr(day3);
    return (0);
}      
