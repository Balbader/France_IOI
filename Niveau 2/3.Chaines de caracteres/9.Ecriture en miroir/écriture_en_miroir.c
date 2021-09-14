#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
int ft_strlen(char *str);

int main(void)
{
    char str[1001];
    int lines;
    int length;
    int i;

    scanf("%d\n", &lines);
    while (lines > 0)
    {
        i = 0;
        scanf("%[^\n]\n", str);
        length = ft_strlen(str) - 1;
        i = length;
        while (i >= 0)
        {
            ft_putchar(str[i]);
            i--;
        }
        ft_putchar('\n');
        lines--;
    }
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
   int nbLignes;
   scanf("%d\n", &nbLignes);
   for (int idLigne = 0; idLigne < nbLignes; idLigne = idLigne + 1)
   {
      char ligneTexte[1001];
      scanf("%[^\n]\n",ligneTexte);
      int longueur = strlen(ligneTexte);
      for (int iCar = longueur  - 1; iCar >= 0; iCar = iCar - 1)
      {
         printf("%c", ligneTexte[iCar]);
      }
      printf("\n");
   }
}
*/