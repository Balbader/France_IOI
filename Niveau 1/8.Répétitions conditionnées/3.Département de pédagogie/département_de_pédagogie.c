#include <stdio.h>

int main(void)
{
    int nbr_to_find;
    int try;
    int i;

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

/*
#include <stdio.h>

int main(void)
{
    int nbr;
    int try;
    int count = 1;

    scanf("%d", &nbr);
    scanf("%d", &try);
    if (try < nbr)
    {
        printf("c'est plus\n");
        count++;
    }
    else if (try > nbr)
    {
        printf("c'est moins\n");
        count++;
    }
    else if (try == nbr)
    {
        printf("Nombre d'essais nécessaires :\n");
        printf("%d\n", count);
    }

    while (try != nbr)
    {
        scanf("%d", &try);
        if (try < nbr)
        {
            printf("c'est plus\n");
            count++;
        }
        else if (try > nbr)
        {
            printf("c'est moins\n");
            count++;
        }
        else if (try == nbr)
        {
            printf("Nombre d'essais nécessaires :\n");
            printf("%d\n", count);
            break ;
        }
    }

    return (0);
}

*/
