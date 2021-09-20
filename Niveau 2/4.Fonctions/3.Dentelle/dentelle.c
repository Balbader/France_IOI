#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_print(char c, int len);

int main(void)
{
    int len;

    scanf("%d", &len);
    ft_print('X', len);
    ft_print('#', len);
    ft_print('i', len);
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print(char c, int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        ft_putchar(c);
        i++;
    }
    ft_putchar('\n');
}

/*
#include <stdio.h>

void    print_char(int nbr)
{
    int i = 0;

    scanf("%d", &nbr);

    while (i < nbr)
    {
        printf("X");
        i++;
    }
    printf("\n");
    i = 0;
    while (i < nbr)
    {
        printf("#");
        i++;
    }
    printf("\n");
    i = 0;
    while (i < nbr)
    {
        printf("i");
        i++;
    }
    printf("\n");
}

int     main(void)
{
    int nbr;
    print_char(nbr);
    return (0);
}
*/

/*
#include <stdio.h>

void    print_char(int nbr, char c)
{
    int i = 0;
    while (i < nbr)
    {
        printf("%c", c);
    i++;
    }
}

int     main(void)
{
    int nbr;
    scanf("%d", &nbr);
    print_char(nbr, 'X');
    printf("\n");
    print_char(nbr, '#');
    printf("\n");
    print_char(nbr, 'i');
    printf("\n");
    return (0);
}

*/