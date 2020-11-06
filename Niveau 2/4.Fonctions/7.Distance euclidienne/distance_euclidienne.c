#include <stdio.h>
#include <math.h>

void    ft_euc(double a, double b);

int     main(void)
{
    double  x1;
    double  x2;
    double  y1;
    double  y2;
    double  a;
    double  b;

    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    a = x2 - x1;
    b = y2 - y1;
    ft_euc(a, b);
    return (0);
}

void    ft_euc(double a, double b)
{
    double  res;

    res = sqrt(pow(a, 2) + pow(b, 2));
    printf("%lf\n", res);
}

