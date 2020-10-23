#include <stdio.h>

int     main(void)
{
    int     guests;
    int     fruits;

    scanf("%d%d", &guests, &fruits);
    if ((fruits % guests) == 0)
        printf("oui\n");
    else
        printf("non\n");
    return (0);
}

