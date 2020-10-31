#include <stdio.h>

int     main(void)
{
    int     moves;
    int     step;
    int     tot[1000] = {0};
    int     i;

    scanf("%d", &moves);
    step = 0;
    i = 0;
    for (i = 0; i < moves; i++)
    {
        scanf("%d", &step);
        if (step == 1)
           tot[i] += step + 1;
        if (step == 2)
           tot[i] += step - 1;
        if (step == 3)
            tot[i] += step;
        if (step == 4)
           tot[i] += step + 1;
        if (step == 5)
           tot[i] += step - 1;
    }
    for (i = moves - 1; i >= 0; i--)
        printf("%d\n", tot[i]);
    return (0);
}
