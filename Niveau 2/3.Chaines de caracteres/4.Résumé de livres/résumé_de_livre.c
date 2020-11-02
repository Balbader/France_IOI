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
    int     books;
    int     min_length;
    char    title[1000];
    char    summary[1000];
    int     i;

    scanf("%d%d\n", &books, &min_length);
    for (i = 1; i <= books; i++)
    {
        scanf("%[^\n]\n", title);
        scanf("%[^\n]\n", summary);
        if (ft_strlen(summary) < min_length)
            printf("%s\n", title);
    }
    return (0);
}
