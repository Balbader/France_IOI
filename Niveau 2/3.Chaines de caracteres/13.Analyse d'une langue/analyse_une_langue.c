#include <stdio.h> 

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     main(void)
{
    char    to_find;
    char    str[1001];
    int     lines;
    int     found;
    int     i;
    int     j;

    scanf("%c", &to_find);
    scanf("%d\n", &lines);
    found = 0;
    for (i = 1; i <= lines; i++)
    {
        scanf("%[^\n]%*c", str);
        for (j = 0; j < ft_strlen(str); j++)
        {
            if (str[j] == to_find)
                found++;
        }
    }
    printf("%d\n", found);
    return (0);
}
