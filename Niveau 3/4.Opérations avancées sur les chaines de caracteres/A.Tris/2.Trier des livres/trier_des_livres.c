#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     ft_strcmp(char *s1, char *s2);
int     compare_text(const void *s1, const void *s2);


int     main(void)
{
    int     tot_books;
    int     i;

    scanf("%d\n", &tot_books);

    char    title[tot_books][101];

    i = 0;
    while (i < tot_books)
    {
        scanf("%[^\n]%*c\n", title[i]);
        i++;
    }

    qsort(title, tot_books, 101 * sizeof(char), compare_text);

    i = 0;
    while (i < tot_books)
    {
        printf("%s\n", title[i]);
        i++;
    }
    return (0);
}


int    ft_strcmp(char *s1, char *s2)
{
    int     i;
    int     res;

    res = 0;
    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    res = s1[i] - s2[i];
    return (res);
}

int     compare_text(const void *s1, const void *s2)
{
    return (ft_strcmp((char*)(s1), (char*)(s2)));
}
