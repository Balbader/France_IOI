#include <stdio.h>

int     main(void)
{
    int     beast_nb;
    int     w;
    int     a;
    int     l;
    int     h;
    int     score;

    beast_nb = 0;
    w = 0;
    a = 0;
    l = 0;
    h = 0;
    scanf("%d", &beast_nb);
    while (beast_nb >= 1)
    {
        scanf("%d", &w);
        scanf("%d", &a);
        scanf("%d", &l);
        scanf("%d", &h);
        score = (l * h) + w;
        printf("%d\n", score);
        beast_nb--;
    }
    return (0);
}
