#include <stdio.h>
#include <limits.h>

int ft_find_min(int, int);

int main(void)
{
    int a;
    int b;
    int min;
    int i;

    i = 0;
    min = INT_MAX;
    while (i < 5)
    {
        scanf("%d%d", &a, &b);
        if (ft_find_min(a, b) < min)
            min = ft_find_min(a, b);
        ;
        i++;
    }
    printf("%d\n", min);
    return (0);
}

int ft_find_min(int a, int b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

/*
#include <stdio.h>

void    min2(int nbr)
{
    int     temp;
    int     i;

    scanf("%d", &nbr);
    temp = nbr;
    while (i < 9)
    {
        scanf("%d", &nbr);
        if (temp > nbr)
        {
            temp = nbr;
        }
        i++;
    }
    printf("%d\n", temp);
}

int     main(void)
{
    int nbr;
    min2(nbr);
    return (0);
}
*/

/*
#include <stdio.h>
int min2(int val1, int val2)
{
   if (val1 < val2)
      return val1;
   return val2;
}
int main()
{
   int valMin;
   scanf("%d", &valMin);

   for (int iVal = 1; iVal < 10; iVal = iVal + 1)
   {
      int valeur;
      scanf("%d", &valeur);
      valMin = min2(valMin, valeur);
   }
   printf("%d\n", valMin);
}
*/