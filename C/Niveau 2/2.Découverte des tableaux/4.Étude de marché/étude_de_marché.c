#include <stdio.h>

int main(void)
{
    int nbr_of_prod;
    int nbr_of_pers;
    int fav_prod;
    int prod_list[1000] = {0};
    int i;

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

/*
#include <stdio.h>

int main(void)
{
    int tot_prod;
    int tot_peeps;
    int prod_nbr;
    int arr[1000] = {0};
    int i = 0;
    int j = 0;

    scanf("%d", &tot_prod);
    scanf("%d", &tot_peeps);

    while (i < tot_peeps)
    {
        scanf("%d", &prod_nbr);
        arr[prod_nbr] += 1;
        i++;
    }
    while (j < tot_prod)
    {
        printf("%d\n", arr[j]);
        j++;
    }
    return (0);
}
*/
