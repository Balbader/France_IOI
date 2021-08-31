#include <stdio.h>

int main(void)
{
    int tot_cars;
    double cars[3000] = {0};
    double tot_wgt;
    double car_wgt;
    double even;
    int i;

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

/*
#include <stdio.h>

int main(void)
{
    int nbr_char;
    int i = 0;
    int j = 0;
    float weight = 0.0;
    float arr[3000] = {0.0};
    float tot_weight = 0.0;
    float even_weight = 0.0;

    scanf("%d", &nbr_char);
    while (i < nbr_char)
    {
        scanf("%f", &weight);
        arr[i] += weight;
        tot_weight += weight;
        i++;
    }

    even_weight = tot_weight / nbr_char;

    while (j < nbr_char)
    {
        arr[j] -= even_weight;
        arr[j] *= -1;
        printf("%f\n", arr[j]);
        j++;
    }
    return (0);
}
*/