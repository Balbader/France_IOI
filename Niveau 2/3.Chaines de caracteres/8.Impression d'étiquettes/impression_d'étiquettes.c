#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        ft_putchar('\n');
        i++;
    }
}

int main(void)
{
    char str[51];

    scanf("%[^\n]", str);
    ft_putstr(str);
    return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
   char texte[51];
   scanf("%[^\n]", texte);
   int longueurTexte = strlen(texte);
   for (int iCar = 0; iCar < longueurTexte; iCar = iCar + 1)
   {
      printf("%c\n", texte[iCar]);
   }
}
*/