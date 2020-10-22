#include <stdio.h>

int     main(void)
{
    double      league;
    double      km;

    scanf("%lf", &league);
    km = league / 0.707;
    printf("%lf\n", km);
    return (0);
}
