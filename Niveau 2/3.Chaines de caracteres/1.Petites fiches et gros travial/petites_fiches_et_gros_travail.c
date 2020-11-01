#include <stdio.h>
#include <unistd.h>
#include <string.h>

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
        write(1, &str[i], 1);
        i++;
    }
}

int     main(void)
{
    int     books;
    int     i;
    char    title[201];
    char    auth_name[201];

    books = 6;
    for (i = 0; i < books; i++)
    {
        scanf("%[^\n]\n", auth_name);
        scanf("%[^\n]\n", title);
        ft_putstr(title);
        ft_putchar('\n');
        ft_putstr(auth_name);
        ft_putchar('\n');
    }
    return (0);
}
