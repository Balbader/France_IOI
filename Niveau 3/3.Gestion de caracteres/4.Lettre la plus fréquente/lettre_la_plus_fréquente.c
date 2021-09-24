#include <stdio.h>

char *remove_white_spaces(char *);
char *ft_strcpy(char *, char *);
char max_char(char *);
char *to_lower(char *);

int main(void)
{
    char str[10001] = "Le francais est une langue romane de la famille des langues indo europeennes";
    char letters[10001];
    char res;
    int i;

    /*scanf("%s", str);*/
    ft_strcpy(letters, str);
    to_lower(letters);
    remove_white_spaces(letters);
    res = max_char(letters);

    printf("res: %c\n", res);
    return (0);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

char *to_lower(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}

char *remove_white_spaces(char *str)
{
    int i;
    int j;

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

char max_char(char *str)
{
    int max;
    int arr[255] = {0};
    int i;
    int index;

    max = arr[0];
    i = 0;
    index = 0;
    while (str[i])
    {
        if (arr[str[i]] > max)
        {
            max = arr[str[i]];
            printf("max: %c\n", max);
            index = i;
        }
        i++;
    }
    return (str[index]);
}
