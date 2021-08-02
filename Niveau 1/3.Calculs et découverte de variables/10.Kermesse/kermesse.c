#include <stdio.h>

int     main(void)
{
    int i = 1;

    while (i < 51)
    {
        printf("%d\n", (i * (i + 1) / 2));
        i++;
    }
    return (0);
}

