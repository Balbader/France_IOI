#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int main(void)
{
    char str1[51];
    char str2[51];
    int res;

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

/*
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main(void)
{
    char name_1[51];
    char name_2[51];
    scanf("%[^\n]\n", name_1);
    scanf("%[^\n]\n", name_2);
    ft_strcmp(name_1, name_2);
    if (ft_strcmp(name_1, name_2) == 0)
    {
        return (0);
    }
    if (ft_strcmp(name_1, name_2) > 0)
    {
        printf("%s\n", name_2);
    }
    else
    {
        printf("%s\n", name_1);
    }

    return (0);
}

*/