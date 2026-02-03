#include <unistd.h>
#include <stdio.h>

int     main(void)
{
    int     house;
    int     x;
    int     y;
    int     x_max;
    int     x_min;
    int     y_max;
    int     y_min;
    
    x_max = 1;
    x_min = 1000000;
    y_max = 1;
    y_min = 1000000;
    scanf("%d", &house);
    while (house >= 1)
    {
        scanf("%d%d", &x, &y);
        if (x > x_max)
            x_max = x;
        if (x < x_min)
            x_min = x;
        if (y > y_max)
            y_max = y;
        if (y < y_min)
            y_min = y;
        house--;
    }
    printf("%d\n", ((2 * (x_max - x_min)) + (2 * (y_max - y_min))));
    return (0);
}

