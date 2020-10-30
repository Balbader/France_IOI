#include <stdio.h>

int     main(void)
{
    int     nb_op;
    int     stock[11] = {0};
    int     num;
    int     qte;
    int     i;

    scanf("%d", &nb_op);
    while(nb_op > 0)
    {
        scanf("%d %d", &num, &qte);
        stock[num] += qte;
        nb_op--;
    }
    for(i = 1; i < 11; i++)
        printf("%d\n", stock[i]);
    return(0);
}
