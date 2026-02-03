#include <stdio.h>

int     main(void)
{
    int     tot;
    double  nbr;
    double  age;
    double  price;

    scanf("%d", &tot);
    while (tot >= 1)
    {
        scanf("%lf%lf%lf", &nbr, &age, &price);
        printf("%lf\n", price / nbr);
        tot--;
    }
    return (0);
}
