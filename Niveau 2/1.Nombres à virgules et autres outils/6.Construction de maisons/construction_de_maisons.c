#include <stdio.h>
#include <math.h>

int     main(void)
{
    double  qte;
    int     wgt_per_bag;
    int     tot_bag;
    int     tot_wgt;

    scanf("%lf", &qte);
    wgt_per_bag = 60;
    tot_bag = 0;
    tot_wgt = 0;
    if (qte == 0.0)
    {
        tot_bag = 0;
        printf("%d\n", tot_bag);
    }
    while (tot_wgt < qte)
    {
        tot_bag += 1;
        tot_wgt += wgt_per_bag;
        if (tot_wgt >= qte)
        {
            tot_bag *= 45;
            printf("%d\n", tot_bag);
        }
    }
    return (0);
}
