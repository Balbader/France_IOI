#include <stdio.h>

int     main(void)
{
    int     nbr;
    int     min;
    int     max;
    int     temp;

    scanf("%d%d%d", &nbr, &min, &max);
    while (nbr > 0)
    {
        scanf("%d", &temp);
        if (temp < min || temp > max)
        {
            printf("Alerte !!\n");
            break ;
        }
        else
            printf("Rien à signaler\n");
        nbr--;
    }
    return (0);
}
