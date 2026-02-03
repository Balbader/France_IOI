#include <stdio.h>

int     main(void)
{
    int     x;
    int     guests;
    int     time;
    int     party;
    int     tot;

    scanf("%d", &x);
    guests = x * 2;
    party = 0;
    tot = 0;
    while (guests >= 1)
    {
        scanf("%d", &time);
        if (time > 0)
            tot++;
        if (time < 0)
            tot--;
        if (tot > party)
            party = tot;
        guests--;
    }
    printf("%d\n", party);
    return (0);
}
