#include <stdio.h>
#include <unistd.h>

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
    char    str[101];
    int     i;

    scanf("%[^\n]%*c", str);
    i = 0;
    while (str[i])
    {
        if (str[i] == ' ')
        {
            str[i] = '_';
            i++;
        }
        else
            i++;
    }
    ft_putstr(str);
    return (0);
}
