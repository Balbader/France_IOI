#include <stdio.h>

int     main(void)
{
    int     nbr;
    char    first[101];
    char    last[101];
    int     i;

    scanf("%d", &nbr);
    for (i = 0; i < nbr; i++)
    {
        scanf("%s %s\n", first, last);
        printf("%s %s\n", last, first);
    }
    return (0);
}
