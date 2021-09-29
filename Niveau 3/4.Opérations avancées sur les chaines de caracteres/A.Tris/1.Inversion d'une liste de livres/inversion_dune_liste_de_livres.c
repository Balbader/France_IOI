#include <stdio.h>

int     main(void)
{
    int     tot_books;
    int     i;

    scanf("%d\n", &tot_books);

    char    titles[tot_books][101];

    i = 0;
    while (i < tot_books)
    {
        scanf("%[^\n]%*c\n", titles[i]);
        i++;
    }

    while (tot_books > 0)
    {
        printf("%s\n", titles[tot_books - 1]);
        tot_books--;
    }
    return (0);
}
