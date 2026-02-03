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
    int     ac_date;
    int     day_of_event;
    int     days_to_wait;

    ac_date = 11937;
    day_of_event = 12581;
    days_to_wait = day_of_event - ac_date;
    print_nbr(days_to_wait);
    write(1, "\n", 1);
    return (0);
}
