#include <stdio.h>

int     main(void)
{
    int     nbr_of_prod;
    int     nbr_of_pers;
    int     fav_prod;
    int     prod_list[1000] = {0};
    int     i;

    scanf("%d %d", &nbr_of_prod, &nbr_of_pers);
    while (nbr_of_pers > 0)
    {
        scanf("%d", &fav_prod);
        prod_list[fav_prod]++;
        nbr_of_pers--;
    }
    for (i = 0; i < nbr_of_prod; i++)
        printf("%d\n", prod_list[i]);
    return (0);
}
