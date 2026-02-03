#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    int x;
    int y;
    char c;
    int i;
    int j;

    scanf("%d%d\n", &x, &y);
    scanf("%c", &c);
    i = 0;
    j = 0;
    while (i < x)
    {
        while (j < y)
        {
            ft_putchar(c);
            j++;
        }
        ft_putchar('\n');
        j = 0;
        i++;
    }
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
#include <stdio.h>

void    print_char(int x, int y, char c)
{
    int i;
    int j;

    i = 0;
    while (i < x)
    {
        j = 0;
        while (j < y)
        {
            printf("%c", c);
            j++;
        }
        printf("\n");
        i++;
    }
}

int     main(void)
{
    int     x;
    int     y;
    char    c;

    scanf("%d", &x);
    scanf("%d\n", &y);
    scanf("%c", &c);

    print_char(x, y, c);

    return (0);
}
*/
