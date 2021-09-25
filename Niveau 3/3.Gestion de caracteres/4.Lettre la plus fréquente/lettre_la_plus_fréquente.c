#include <stdio.h>

char *remove_white_spaces(char *);
char *ft_strcpy(char *, char *);
char max_char(char *);
char *to_upper(char *);
int ft_strlen(char *);

int main(void)
{
    char str[10001];
    char letters[10001];
    char res;

    scanf("%s", str);

    ft_strcpy(letters, str);
    to_upper(letters);
    remove_white_spaces(letters);
    res = max_char(letters);

    printf("%c\n", res);
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

char *to_upper(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
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
    int count[256] = {0};
    int max;
    char letter;
    int i;

    max = 0;
    i = 0;

    while (i < ft_strlen(str))
    {
        count[str[i]]++;
        i++;
    }

    i = 0;
    while (i < ft_strlen(str))
    {
        if (count[str[i]] > max)
        {
            max = count[str[i]];
            letter = str[i];
        }
        i++;
    }
    return (letter);
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
