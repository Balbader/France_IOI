#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char);
void    ft_print_X(char);
void    ft_print_rec(int, int);
void    ft_print_tri(int);

int     main(void)
{
    int     x;
    int     y;
    int     nb;

    x = 0;
    y = 0;
    nb = 0;
    ft_print_X('X');
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_rec(x, y);
    ft_putchar('\n');
    ft_putchar('\n');
    ft_print_tri(nb);
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_X(char c)
{
    int     nb;

    scanf("%d", &nb);
    while (nb > 0)
    {
        ft_putchar(c);
        nb--;
    }
}

void    ft_print_rec(int x, int y)
{
    int     i;

    scanf("%d%d", &x, &y);
    for (i = 0; i < y; i++)
        ft_putchar('#');
    ft_putchar('\n');
    while (x - 1 > 1)
    {
        ft_putchar('#');
        for (i = 1; i < y - 1; i++)
            ft_putchar(' ');
        ft_putchar('#');
        ft_putchar('\n');
        x--;
    }
    for (i = 0; i < y; i++)
        ft_putchar('#');
}

void    ft_print_tri(int nb)
{
    int     i;
    int     y;

    scanf("%d", &nb);
    y = 0;;
    for (i = 0; i < nb; i++)
    {
        while (y < nb)
        {
            ft_putchar('@');
            y++;
        }
        y = 0;
        ft_putchar('\n');
    }
}


















