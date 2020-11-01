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

int     ft_strcmp(char *s1, char *s2)
{
    int     i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int     main(void)
{
    char    str1[51];
    char    str2[51];
    int     res;

    scanf("%[^\n]\n", str1);
    scanf("%[^\n]", str2);
    res = ft_strcmp(str1, str2);
    if (res < 0)
        ft_putstr(str1);
    if (res > 0)
        ft_putstr(str2);
    if (res == 0)
        return (0);
    return (0);
}
