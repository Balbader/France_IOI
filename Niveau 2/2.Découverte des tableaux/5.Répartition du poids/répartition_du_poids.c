#include <stdio.h>

int     main(void)
{
    int     tot_cars;
    double  cars[3000] = {0};
    double  tot_wgt;
    double  car_wgt;
    double  even;
    int     i;

    scanf("%d", &tot_cars);
    tot_wgt = 0.0;
    for (i = 0; i < tot_cars; i++)
    {
        scanf("%lf", &car_wgt);
        cars[i] += car_wgt;
        tot_wgt += car_wgt;
    }
    even = tot_wgt / tot_cars;
    for (i = 0; i < tot_cars; i++)
    {
        cars[i] = even - cars[i];
        printf("%lf\n", cars[i]);
    }
    return (0);
}

