#include <stdio.h>

int     main(void)
{
    int     tot;
    int     side;
    int     max;

    scanf("%d", &tot);
    side = 0;
    max = 0;
    while (tot != 0 && ((max + (side + 1) * (side + 1)) <= tot))
    {
        side++;
        max += (side * side);
    }
    printf("%d\n", side);
    printf("%d\n", max);
    return (0);
}
