#include <stdio.h>
#include <stdbool.h>

int     main(void)
{
    int     coins;
    int     x;
    int     y;
    int     in;
    int     mid_yellow;

    scanf("%d", &coins);
    while (coins >= 1)
    {
        scanf("%d%d", &x, &y);
        in = (x > 0) && (x < 90) && (y > 0) && (y < 70);
        mid_yellow = (x > 25) && (x < 50) && (y > 20) && (y < 45);
        if (!in)
            printf("En dehors de la feuille\n");
        else if (((x > 15 && x < 45) || (x > 60 && x < 85)) && (y > 60))
            printf("Dans une zone rouge\n");
        else if (!mid_yellow && (x > 10 && x < 85) && (y > 10 && y < 55))
            printf("Dans une zone bleue\n");
        else
            printf("Dans une zone jaune\n");
        coins--;
    }
    return (0);
}
