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
    int     cote;
    int     surface;
    int     perimetre;

    cote = (5 * 17) + (2 * 7) + 5 + (2 * 2);
    surface = cote * cote;
    perimetre = cote * 4;
    print_nbr(surface);
    putchar('\n');
    print_nbr(perimetre);
    putchar('\n');
    return (0);
}

