#include <stdio.h>

int main(void)
{
    int nbr;
    int count;

    count = 0;
    while (scanf("%d", &nbr) != EOF)
    {
        count += nbr;
    }
    printf("%d\n", count);
    return (0);
}

/*
#include <stdio.h>
int main()
{
   int nbTotal = 0, nbGens;
   while (scanf("%d", &nbGens) == 1)
   {
      nbTotal = nbTotal + nbGens;
   }
   printf("%d", nbTotal);
}
*/