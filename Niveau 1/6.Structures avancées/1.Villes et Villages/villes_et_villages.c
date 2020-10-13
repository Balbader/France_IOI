#include <stdio.h>

int     main(void)
{
    int     places_nb;
    int     city;
    int     pop;

    city = 0;
    scanf("%d", &places_nb);
    while (places_nb > 0)
    {
        scanf("%d", &pop);
        if (pop > 10000)
            city += 1;
        places_nb--;
    }
    printf("%d\n", city);
    return (0);
}
