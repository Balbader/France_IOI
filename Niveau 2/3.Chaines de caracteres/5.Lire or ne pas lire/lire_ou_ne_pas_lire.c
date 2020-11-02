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
    int     nbr_books;
    char    title[1001];
    int     length;
    int     i;

    scanf("%d\n", &nbr_books);
    length = 0;
    for (i = 0; i < nbr_books; i++)
    {
        scanf("%[^\n]\n", title);
        if (ft_strlen(title) > length)
        {
            length = ft_strlen(title);
            printf("%s\n", title);
        }
    }
    return (0);
}
