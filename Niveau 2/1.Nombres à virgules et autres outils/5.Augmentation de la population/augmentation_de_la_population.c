#include <stdio.h>
#include <math.h>

int     main(void)
{
    int     pop;
    double  new_pop;
    double  growth;

    scanf("%d%lf", &pop, &growth);
    growth = (growth / 100) * pop;
    new_pop = pop + growth;
    printf("%lf\n", floor(new_pop));
    return (0);
}
