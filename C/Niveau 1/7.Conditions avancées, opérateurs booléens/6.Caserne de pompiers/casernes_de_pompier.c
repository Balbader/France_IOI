#include <stdio.h>

int     main(void)
{
    int     nbr;
    int     xMin1, xMax1, yMin1, yMax1, xMin2, xMax2, yMin2, yMax2;

    scanf("%d", &nbr);
    while (nbr >= 1)
    {
        scanf("%d%d%d%d%d%d%d%d", &xMin1, &xMax1, &yMin1, &yMax1,
                &xMin2, &xMax2, &yMin2, &yMax2);
        if(((xMax2 <= xMin1) || (xMax1 <= xMin2))
                || ((yMax2 <= yMin1) || (yMax1 <= yMin2)))
            printf("NON\n");
        else
            printf("OUI\n");
        nbr--;
    }
    return (0);
}
