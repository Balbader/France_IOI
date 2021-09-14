#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_check_char(char *str);

int main(void)
{
    char title[101];
    char name[101];

    scanf("%[^\n]\n", title);
    scanf("%[^\n]", name);
    ft_check_char(title);
    ft_putchar('\n');
    ft_check_char(name);
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_check_char(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y' || str[i] == ' ')
            i++;
        else
        {
            ft_putchar(str[i]);
            i++;
        }
    }
}

/*
#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(void)
{
    char    str_1[101];
    char    str_2[101];
    int     i;

    i = 0;

    scanf("%[^\n]\n", str_1);
    scanf("%[^\n]", str_2);
    while (str_1[i])
    {
        if(str_1[i] == 'A' || str_1[i] == 'E' || str_1[i] == 'I' || str_1[i] == 'O'
                || str_1[i] == 'U' || str_1[i] == 'Y' || str_1[i] == ' ')
        {
            i++;
        }
        else
        {
            ft_putchar(str_1[i]);
            i++;
        }
    }

    ft_putchar('\n');

    i = 0;
    while (str_2[i])
    {
        if(str_2[i] == 'A' || str_2[i] == 'E' || str_2[i] == 'I' || str_2[i] == 'O'
                || str_2[i] == 'U' || str_2[i] == 'Y' || str_2[i] == ' ')
        {
            i++;
        }
        else
        {
            ft_putchar(str_2[i]);
            i++;
        }
    }
    return (0);
}
*/

/*
#include <stdio.h>
#include <string.h>
int main()
{
   for (int idLigne = 0; idLigne < 2; idLigne = idLigne + 1)
   {
      char ligne[101];
      scanf("%[^\n]\n", ligne);
      int longueurLigne = strlen(ligne);
      for (int idLettre = 0; idLettre < longueurLigne; idLettre = idLettre + 1)
      {
         char car = ligne[idLettre];
         if (car != ' ' && car != 'A' && car != 'E' && car != 'I' &&
             car != 'O' && car != 'U' && car != 'Y')
         {
            printf("%c", car);
         }
      }
      printf("\n");
   }
}
*/

/*
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool estVoyelle(char car)
{
   char voyelles[7] = "AEIOUY";
   for (int idVoy = 0; idVoy < 7; idVoy = idVoy + 1)
   {
      if (car == voyelles[idVoy])
         return true;
   }
   return false;
}
int main()
{
   for (int idLigne = 0; idLigne < 2; idLigne = idLigne + 1)
   {
      char ligne[101];
      scanf("%[^\n]\n", ligne);
      int longueurLigne = strlen(ligne);
      for (int idLettre = 0; idLettre < longueurLigne; idLettre = idLettre + 1)
      {
         char car = ligne[idLettre];
         if (car != ' ' && !estVoyelle(car))
         {
            printf("%c", car);
         }
      }
      printf("\n");
   }
   return 0;
}
*/