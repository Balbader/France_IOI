#include <stdio.h>

int     main(void)
{
    int     sellers;
    int     price;
    int     pr_min;
    int     pos;
    int     i;

    i = 1;
    pos = 1;
    pr_min = 1000000;
    scanf("%d", &sellers);
    while (i <= sellers)
    {
        scanf("%d", &price);
        if (price <= pr_min)
        {
            pr_min = price;
            pos = i;
        }
        i++;
    }
    printf("%d\n", pos);
    return (0);
}
