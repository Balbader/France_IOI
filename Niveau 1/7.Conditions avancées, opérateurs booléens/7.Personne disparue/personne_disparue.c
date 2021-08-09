#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int missing;
    int list;
    int check_list;
    bool not_found;

    scanf("%d%d", &missing, &list);
    not_found = false;
    while (list >= 1)
    {
        scanf("%d", &check_list);
        if (check_list == missing)
            not_found = true;
        list--;
    }
    if (not_found)
        printf("Sorti de la ville\n");
    else
        printf("Encore dans la ville\n");
    return (0);
}

/*
#include <stdio.h>

int     main(void)
{
    int tag;
    int list;
    int tags;
    int i = 0;
    int count = 0;

    scanf("%d", &tag);
    scanf("%d", &list);
    while (i < list)
    {
        scanf("%d", &tags);
        if (tags == tag)
        {
            count += 1;
        }
        list--;
    }

    if (count > 0)
    {
        printf("Sorti de la ville\n");
    }
    else
    {
        printf("Encore dans la ville\n");
    }
    return (0);
}
*/