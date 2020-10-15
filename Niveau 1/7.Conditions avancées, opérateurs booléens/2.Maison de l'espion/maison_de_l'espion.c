#include <stdio.h>

int     main(void)
{
    int     x_min;
    int     x_max;     
    int     y_min;     
    int     y_max;
    int     houses;
    int     search;
    int     hx;
    int     hy;

    scanf("%d%d%d%d", &x_min, &x_max, &y_min, &y_max);
    scanf("%d", &houses);
    search = 0;
    while (houses >= 1)
    {
        scanf("%d%d", &hx, &hy);
        if ((hx >= x_min && hx <= x_max) && (hy >= y_min && hy <= y_max))
            search += 1;
        houses--;
    }
    printf("%d\n", search);
    return (0);
}
