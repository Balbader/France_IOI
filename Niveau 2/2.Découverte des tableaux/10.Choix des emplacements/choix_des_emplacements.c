#include <stdio.h>

int main(void)
{
    int     list[1000];
    int     places;
    int     seller;
    int     i;
    
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

