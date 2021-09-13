#include <stdio.h>

int main(void)
{
    int nbr;
    char first[101];
    char last[101];
    int i;

    scanf("%d", &nbr);
    for (i = 0; i < nbr; i++)
    {
        scanf("%s %s\n", first, last);
        printf("%s %s\n", last, first);
    }
    return (0);
}

/*
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    first[101];
    char    last[101];
    int     names;

    scanf("%d\n", &names);
    while (names > 0)
    {
        scanf("%s", first);
        scanf("%s", last);
        printf("%s " , last);
        printf("%s\n" , first);
        names--;
    }
    return (0);
}
*/
