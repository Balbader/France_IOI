#include <stdio.h>

int     main(void)
{
    int nbZones;

    scanf("%d", &nbZones);
    printf("%d\n", ((nbZones % 24) + 24 ) % 24);
    return (0);
}
