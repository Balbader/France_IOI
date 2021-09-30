#include <stdio.h>

int     main(void)
{
    int     tot_books;
    scanf("%d\n", &tot_books);
    char    titles[tot_books][101];
    char    temp;
    int     i;

    i = 0;
    while (i < tot_books)
    {
        scanf("%[^\n]%*c\n", titles[i]);
        i++;
    }

    if (titles[0][0] == 'A')
    {
        printf("%s\n", titles[0]);
        i = 1;
        temp = titles[0][0];
    }
    else
    {
        temp = 'A';
        i = 0;
    }

    while (i < tot_books)
    {
        if (titles[i][0] > temp)
        {
            printf("%s\n", titles[i]);
            temp = titles[i][0];
        }
        i++;
    }
    return (0);
}
