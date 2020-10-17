#include <stdio.h>

int    check_case(int a, int b, int c, int d, int e)
{
    int     x;

    x = 0;
    if (a >= 178 && a <= 182)
        x += 1;
    if (b >= 34)
        x += 1;
    if (c < 70)
        x += 1;
    if (d == 0)
        x += 1;
    if (e == 1)
        x += 1;
    return (x);
}

void    is_guilty(int x)
{
    if (x == 5)
        printf("Très probable\n");
    else if (x <= 4 && x >= 3)
        printf("Probable\n");
    else if (x == 0)
        printf("Impossible\n");
    else
        printf("Peu probable\n");
}

int     main(void)
{
    int     suspect;
    int     guilty;
    int     hgt;
    int     age;
    int     wgt;
    int     horse;
    int     hair;

    scanf("%d", &suspect);
    guilty = 0;
    while (suspect >= 1)
    {
        scanf("%d%d%d%d%d", &hgt, &age, &wgt, &horse, &hair);
        guilty = check_case(hgt, age, wgt, horse, hair);
        is_guilty(guilty);
        guilty = 0;
        suspect--;
    }
    return (0);
}
