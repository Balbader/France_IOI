#include <stdio.h>

int     main(void)
{
    int     tot;
    int     value;
    int     up;
    int     down;
    
    up = 0;
    down = 0;
    value = 0;
    scanf("%d", &tot);
    while (tot >= 1)
    {
        scanf("%d", &value);
        if (value > 0)
            up += value;
        if (value < 0)
        {
            value *= -1;
            down += value;
        }
        tot--;
    }
    printf("%d\n%d\n", up, down);
    return (0);
}
