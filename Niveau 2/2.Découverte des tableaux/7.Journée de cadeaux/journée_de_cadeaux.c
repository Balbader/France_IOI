#include <stdio.h>
#include <stdlib.h>

int compareEntier(const void *pEntier1, const void *pEntier2)
{
  return ( *(int*)(pEntier1) - *(int*)(pEntier2) );
}

int main(void)
{
    int     tot_hab;
    int     revenue[1000];
    int     fortune_par_habitant;
    int     moy_impair;
    int     moy_pair;
    int     moy_pair_2;
    int     moy_totale;
    int     i;
    float   resultat_pair;

    scanf("%d", &tot_hab);
    for (i = 0; i < tot_hab; i++)
    {
        scanf("%d", &fortune_par_habitant);
        revenue[i] = fortune_par_habitant;
    }
    qsort(revenue, tot_hab, sizeof(int), compareEntier);
    if (tot_hab % 2 == 1)
    {
        moy_impair = (tot_hab - 1) / 2;
        printf("%d\n", revenue[moy_impair]);
    }
    else
    {
        moy_pair = tot_hab / 2;
        moy_pair_2 = (tot_hab / 2) - 1;        
        moy_totale = revenue[moy_pair] + revenue[moy_pair_2];
        resultat_pair = moy_totale / 2.0;
        printf("%f\n", resultat_pair); 
    }
    return 0;
}
