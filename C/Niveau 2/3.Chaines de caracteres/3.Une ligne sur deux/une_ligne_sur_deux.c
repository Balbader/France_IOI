#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    int lines;
    char text[101];
    int i;

    scanf("%d\n", &lines);
    for (i = 0; i < lines; i++)
    {
        scanf("%[^\n]\n", text);
        if (i % 2 == 0)
        {
            ft_putstr(text);
            write(1, "\n", 1);
        }
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
    char arr[101][101];
    char temp[101];
    int lines;
    int i = 0;
    int j = 0;

    scanf("%d\n", &lines);
    while (i < lines)
    {
        scanf("%[^\n]\n", temp);
        strcpy(arr[i], temp);
        i++;
    }

    while (j < lines)
    {
        printf("%s\n", arr[j]);
        j += 2;
    }
    return (0);
}
*/

/*
#include <stdio.h>
int main()
{
   int nbLignes;
   char ligne[101];
   scanf("%d\n", &nbLignes);
   for (int idLigne = 1; idLigne <= nbLignes; idLigne = idLigne + 1)
   {
      scanf("%[^\n]\n", ligne);
      if (idLigne % 2 == 1)
      {
         printf("%s\n", ligne);
      }
   }
}
*/
