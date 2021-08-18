#include <stdio.h>
#include <math.h>

int main(void)
{
    float sec;

    scanf("%f", &sec);
    printf("%f\n", round((sec * 340.29) / 1000));
    return (0);
}

/*
#include <stdio.h>
#include <math.h>

int main(void)
{
    double time;
    double dist_per_second;
    double tot_dist;

    scanf("%lf", &time);

    dist_per_second = 340.29;
    tot_dist = time * dist_per_second;
    if (time < 3)
    {
        printf("%lf\n", tot_dist / 1000);
    }
    else
    {
        printf("%lf\n", round(tot_dist / 1000));
    }
    return (0);
}

*/