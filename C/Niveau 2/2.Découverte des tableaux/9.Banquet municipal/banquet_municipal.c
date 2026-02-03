#include <stdio.h>

int main(void)
{
    int list[1000];
    int pos;
    int chg_pos;
    int pos_1;
    int pos_2;
    int temp_pos;
    int i;

    scanf("%d %d", &pos, &chg_pos);
    for (i = 0; i < pos; i++)
        scanf("%d", &list[i]);
    for (i = 0; i < chg_pos; i++)
    {
        scanf("%d %d", &pos_1, &pos_2);
        temp_pos = list[pos_2];
        list[pos_2] = list[pos_1];
        list[pos_1] = temp_pos;
    }
    for (i = 0; i < pos; i++)
        printf("%d\n", list[i]);
    return 0;
}

/*
#include <stdio.h>

int main(void)
{
    int tot_position;
    int tot_changes;
    int arr[1000] = {0};
    int guest_nbr;
    int p_1;
    int p_2;
    int temp;
    int i = 0;
    int j = 0;
    int k = 0;

    scanf("%d", &tot_position);
    scanf("%d", &tot_changes);

    while (i < tot_position)
    {
        scanf("%d", &guest_nbr);
        arr[i] += guest_nbr;
        i++;
    }

    while (j < tot_changes)
    {
        scanf("%d", &p_1);
        scanf("%d", &p_2);
        temp = arr[p_2];
        arr[p_2] = arr[p_1];
        arr[p_1] = temp;
        j++;
    }

    while (k < tot_position)
    {
        printf("%d\n", arr[k]);
        k++;
    }
    return (0);
}

*/