#include <unistd.h>
#include <stdio.h>

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
        write(1, "\n", 1);
        ft_putstr(auth_name);
        write(1, "\n", 1);
    }
    return (0);
}
