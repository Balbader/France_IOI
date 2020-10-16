#include <stdio.h>
#include <stdbool.h>

int     main(void)
{
    int     missing;
    int     list;
    int     check_list;
    bool     not_found;

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
