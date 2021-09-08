#include <stdio.h>
#include <stdlib.h>

int compare(const void *p1, const void *p2)
{
    return (*(int *)(p1) - *(int *)(p2));
}

int main(void)
{
    int list[3000];
    int nbr_participants;
    int spot;
    int final_list;
    int i;

    scanf("%d", &nbr_participants);
    for (i = 0; i < nbr_participants; i++)
    {
        scanf("%d", &spot);
        list[i] = spot;
    }
    qsort(list, nbr_participants, sizeof(int), compare);
    final_list = nbr_participants - 1;
    for (i = 0; i < (nbr_participants / 2); i++)
    {
        printf("%d %d\n", list[i], list[final_list]);
        final_list -= 1;
    }
    return 0;
}

/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int cmp(const void *a, const void *b)
{
    return ( *(int*)a - *(int*)b );
}


int main(void)
{
    int tot_players;
    int number;
    int arr[3000] = {0};
    int i = 0;
    int j = 0;

    scanf("%d", &tot_players);
    while (i < tot_players)
    {
        scanf("%d", &number);
        arr[i] += number;
        i++;
    }

    qsort(arr, tot_players, sizeof(int), cmp);

    while (j < tot_players/2)
    {
        printf("%d %d\n", arr[j], arr[i-1]);
        j++;
        i--;
    }
    return (0);
}

*/
