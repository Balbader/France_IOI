#include <stdio.h>

int     main(void)
{
    int     nbr;
    int     count;

    count = 0;
    while (scanf("%d", &nbr) != EOF)
    {
        count += nbr;
    }
    printf("%d\n", count);
    return (0);
}
