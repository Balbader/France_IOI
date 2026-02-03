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

/*
int main(void)
{
    double qnt;
    double bag;
    int price;
    int final_price;

    scanf("%lf", &qnt);

    bag = 60.0;
    price = 45.0;

    if (qnt <= bag)
    {
        if (qnt == 0.0)
        {
            printf("%d\n", 0);
        }
        else
            printf("%d\n", price);
    }
    else
    {
        final_price = (ceil(qnt / bag)) * price;
        printf("%d\n", final_price);
    }
    return (0);
}

 */
