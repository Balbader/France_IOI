#include <stdio.h>

char    *remove_white_spaces(char*);
char    *ft_strcpy(char*, char*);

int     main(void)
{
    char    str[10001] = "Le francais est une langue romane de la famille des langues indo europeennes";
    char    letters[10001];
    int     i;

    /*scanf("%s", str);*/
    ft_strcpy(letters, str);
    remove_white_spaces(letters);

    printf("%s", letters);
    return (0);
}

char    *remove_white_spaces(char *str)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}

char    *ft_strcpy(char *dest, char *src)
{
    int     i;
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}


