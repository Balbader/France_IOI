#include <stdio.h>
#include <stdlib.h>

int     compare(const void *p1, const void *p2)
{
    return ( *(int*)(p1) - *(int*)(p2) );
}

int     main(void)
{
    int     list[3000];
    int     nbr_participants;
    int     spot;
    int     final_list;
    int     i;

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
