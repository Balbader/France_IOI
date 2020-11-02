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
    int     lines;
    int     words;
    int     length;
    int     arr[101] = {0};
    char    str[101] = {0};
    int     i;
    int     j;

    scanf("%d %d", &lines, &words);
    i = 0;
    while (i < lines)
    {
        j = 0;
        while (j < words)
        {
            scanf("%s", str);
            length = ft_strlen(str);
            arr[length]++;
            j++;
        }
        i++;
    }
    for (i = 0; i <= 100; i++)
    {
        if (arr[i] > 0)
            printf("%d : %d\n", i, arr[i]);
    }
    return (0);
}

