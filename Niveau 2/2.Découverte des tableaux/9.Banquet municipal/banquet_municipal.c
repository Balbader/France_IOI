#include <stdio.h>

int main(void)
{
    int     list[1000];
    int     pos;
    int     chg_pos;
    int     pos_1;
    int     pos_2;
    int     temp_pos;
    int     i;

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

