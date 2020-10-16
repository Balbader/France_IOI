#include <stdio.h>
#include <stdbool.h>

int     main(void)
{
    int     start;
    int     end;
    int     guests;
    int     g_start;
    int     g_end;
    int     guilty;
    bool    innocent;

    scanf("%d%d%d", &start, &end, &guests);
    guilty = 0;
    while (guests >= 1)
    {
        scanf("%d%d", &g_start, &g_end);
        innocent = ((g_start > end) || (g_end < start));
        if (!innocent)
            guilty++;
        guests--;
    }
    printf("%d\n", guilty);
    return (0);
}
