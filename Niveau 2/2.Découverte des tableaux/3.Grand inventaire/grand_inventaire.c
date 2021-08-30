#include <stdio.h>

int main(void)
{
    int nb_op;
    int stock[11] = {0};
    int num;
    int qte;
    int i;

    scanf("%d", &nb_op);
    while (nb_op > 0)
    {
        scanf("%d %d", &num, &qte);
        stock[num] += qte;
        nb_op--;
    }
    for (i = 1; i < 11; i++)
        printf("%d\n", stock[i]);
    return (0);
}

/*
#include <stdio.h>

int main(void)
{
    int tot_op;
    int ingredient_nbr;
    int qte;
    int i = 0;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%d", &tot_op);
    while (tot_op > 0)
    {
        scanf("%d", &ingredient_nbr);
        scanf("%d", &qte);
        arr[ingredient_nbr - 1] += qte;
        tot_op--;
    }

    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i++;
    }
    return (0);
}

*/