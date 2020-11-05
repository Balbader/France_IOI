#include <stdio.h>
#include <limits.h>

int     ft_find_min(int, int);

int     main(void)
{
    int     a;
    int     b;
    int     min;
    int     i;

    i = 0;
    min = INT_MAX;
    while (i < 5)
    {
        scanf("%d%d", &a, &b);
        if (ft_find_min(a, b) < min)
            min = ft_find_min(a, b);;
        i++;
    }
    printf("%d\n", min);
    return (0);
}

int     ft_find_min(int a, int b)
{
    if (a < b)
        return (a);
    else
        return (b);
}
