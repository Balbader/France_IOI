#include <stdio.h>

int     main(void)
{
    int     start;
    int     end;
    int     count;
    int     entries;
    int     spy;

    scanf("%d%d%d", &start, &end, &count);
    spy = 0;
    while (count >= 1)
    {
        scanf("%d", &entries);
        if (entries >= start && entries <= end)
            spy += 1;
        count--;
    }
    printf("%d\n", spy);
    return (0);
}
