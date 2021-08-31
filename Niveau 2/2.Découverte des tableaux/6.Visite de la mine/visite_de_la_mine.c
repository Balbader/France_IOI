#include <stdio.h>

int main(void)
{
    int moves;
    int step;
    int tot[1000] = {0};
    int i;

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

/*
#include <stdio.h>

int main(void)
{
    int tot;
    int arr[1000] = {0};
    int i = 0;

    scanf("%d", &tot);
    while (i < tot)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    while (tot >= 0)
    {
        if (arr[tot] == 1)
            printf("%d\n", 2);
        if (arr[tot] == 2)
            printf("%d\n", 1);
        if (arr[tot] == 3)
            printf("%d\n", arr[tot]);
        if (arr[tot] == 4)
            printf("%d\n", 5);
        if (arr[tot] == 5)
            printf("%d\n", 4);
        tot--;
    }
    return (0);
}

*/