#include <stdio.h>
#include <math.h>

void ft_euc(double a, double b);

int main(void)
{
    double x1;
    double x2;
    double y1;
    double y2;
    double a;
    double b;

    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    a = x2 - x1;
    b = y2 - y1;
    ft_euc(a, b);
    return (0);
}

void ft_euc(double a, double b)
{
    double res;

    res = sqrt(pow(a, 2) + pow(b, 2));
    printf("%lf\n", res);
}

/*
#include <stdio.h>
#include <math.h>


double  distance_euclidienne(float x1, float x2, float y1, float y2);

int     main(void)
{
    float x1;
    float x2;
    float y1;
    float y2;
    float res;

    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    res = distance_euclidienne(x1, x2, y1, y2);
    printf("%f\n", res);

    return (0);
}


double  distance_euclidienne(float x1, float x2, float y1, float y2)
{
    float x_pow;
    float y_pow;
    float res;

    x_pow = (x2 - x1) * (x2 - x1);
    y_pow = (y2 - y1) * (y2 - y1);

    res = sqrt(x_pow + y_pow);
    return (res);
}

*/

/*
#include <stdio.h>
#include <math.h>
double distance(double x1, double y1, double x2, double y2)
{
   return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main()
{
   double x1, y1, x2, y2;
   scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
   printf("%lf\n", distance(x1, y1, x2, y2));
}
*/
