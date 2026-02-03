#include <stdio.h>

int main(void)
{
    int list[1000];
    int places;
    int seller;
    int i;

    scanf("%d", &places);
    for (i = 0; i < places; i++)
    {
        scanf("%d", &seller);
        list[seller] = i;
    }
    for (i = 0; i < places; i++)
        printf("%d\n", list[i]);
    return 0;
}

/*
#include <stdio.h>

int main(void)
{
    int tot_spots;
    int arr[1000] = {0};
    int seller_nbr;
    int i = 0;
    int j = 0;

    scanf("%d", &tot_spots);

    while (i < tot_spots)
    {
        scanf("%d", &seller_nbr);
        arr[seller_nbr] = i;
        i++;
    }

    while (j < tot_spots)
    {
        printf("%d\n", arr[j]);
        j++;
    }
    return (0);
}

*/