#include <stdio.h>

int     main(void)
{
    int     nbr_to_find;
    int     try;
    int     i;

    try = 0;
    i = 0;
    scanf("%d", &nbr_to_find);
    while (i != nbr_to_find)
    {
        scanf("%d", &i);
        try++;
        if (i > nbr_to_find)
            printf("c'est moins\n");
        if (i < nbr_to_find)
            printf("c'est plus\n");
    }
    printf("Nombre d'essais nécessaires :\n%d\n", try);
    return (0);
}
