#include <stdio.h>

int     main(void)
{
    int     pos;
    int     cities;
    int     cit_pos;
    int     dist;
    int     sleep;
 
    scanf("%d", &pos);
    scanf("%d", &cities);
    sleep = 0;
    while (cities >= 1)
    {
        scanf("%d", &cit_pos);
        dist = pos - cit_pos;
        if (dist < 0)
            dist *= -1;
        if (dist <= 50)
            sleep += 1;
        cities--;
    }
    printf("%d\n", sleep);
    return (0);
}
