#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_strcmp(char*, char*);

int     main(void)
{
    int     tot_books;
    char    temp[101];
    int     i;
    int     res;

    scanf("%d\n", &tot_books);

    char    titles[tot_books][101];

    i = 0;
    while (i < tot_books)
    {
        scanf("%[^\n]%*c\n", titles[i]);
        i++;
    }

    strcpy(temp, titles[0]);
    printf("%s\n", temp);
    res = 0;
    i = 1;
    while (i < tot_books)
    {
        res = ft_strcmp(temp, titles[i]);
        if (res < 0)
        {
            printf("%s\n", titles[i]);
            strcpy(temp, titles[i]);
            i++;
        }
        i++;
    }
    return (0);
}


int     ft_strcmp(char *s1, char *s2)
{
    int     i;
    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return (s1[i] - s2[i]);
}

