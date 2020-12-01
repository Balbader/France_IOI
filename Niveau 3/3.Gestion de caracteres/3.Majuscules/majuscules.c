#include <stdio.h>

void    to_upper(char *str);

int     main(void)
{
    char    str[10001];

    scanf("%[^\n]", str);
    to_upper(str);
    return (0);
}

void    to_upper(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    printf("%s\n", str);
}
