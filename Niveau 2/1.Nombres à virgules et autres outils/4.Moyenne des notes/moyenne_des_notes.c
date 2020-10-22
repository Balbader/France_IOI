#include <stdio.h>

int     main(void)
{
    int         nbr;
    int         tot;
    int         note;
    double      moy;

    scanf("%d", &tot);
    nbr = tot;
    moy = 0.0;
    while (tot >= 1)
    {
        scanf("%d", &note);
        moy += note;
        tot--;
    }
    moy /= nbr;
    printf("%lf\n", moy);
    return (0);
}
