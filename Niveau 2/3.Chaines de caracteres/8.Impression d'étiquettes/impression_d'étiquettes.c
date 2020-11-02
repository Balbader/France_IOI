#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        ft_putchar('\n');
        i++;
    }
}

int     main(void)
{
    char str[51];

    scanf("%[^\n]", str);
    ft_putstr(str);
    return (0);
}
