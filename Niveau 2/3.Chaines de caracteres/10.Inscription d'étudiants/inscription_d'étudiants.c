#include <stdio.h>

void    check_name(char *str);

int     main(void)
{
    char    str[51];

    scanf("%[^\n]", str);
    check_name(str);
    return (0);
}

void    check_name(char *str)
{
    int     i;

    i = 0;
    if (str[i] <= 'F')
        printf("1");
    if (str[i] >= 'G' && str[i] <= 'P')
        printf("2");
    if (str[i] >= 'Q' && str[i] <= 'Z')
        printf("3");
}
