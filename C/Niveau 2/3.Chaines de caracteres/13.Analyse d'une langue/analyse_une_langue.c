#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(void)
{
    char to_find;
    char str[1001];
    int lines;
    int found;
    int i;
    int j;

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

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     main(void)
{
    char    letter;
    int     lines;
    char    str[1001][1001];
    char    temp[1001];
    int     i;
    int     j;
    int     count;

    i = 0;
    j = 0;
    count = 0;

    scanf("%c", &letter);
    scanf("%d\n", &lines);

    while (i < lines)
    {
        scanf("%[^\n]\n", temp);
        strcpy(str[i], temp);
        i++;
    }

    i = 0;
    while (i < (sizeof(str) / sizeof(str[0])))
    {
        j = 0;
        while (str[i][j] != '\0')
        {
            if (str[i][j] == letter)
            {
                count++;
            }
            j++;
        }
        i++;
    }

    printf("%d\n", count);
    return (0);
}
*/
