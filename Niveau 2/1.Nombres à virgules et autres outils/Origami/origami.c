#include <stdio.h>

int     main(void)
{
    double   cm;
    int     fold;

    cm = 0.110 / 10;
    fold = 15;
    while (fold >= 1)
    {
        cm *= 2;
        fold--;
    }
    printf("%lf\n", cm);
    return (0);
}
