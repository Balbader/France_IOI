#include <stdio.h>

void to_upper(char *str);

int main(void)
{
    char str[10001];

    scanf("%[^\n]", str);
    to_upper(str);
    return (0);
}

void to_upper(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    printf("%s\n", str);
}

/*
#include <stdio.h>

int     main(void)
{
    char    str[10001];
    int     i;

    scanf("%[^\n]", str);

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i]);
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 'a';
            str[i] += 'A';
            printf("%c", str[i]);
        }
        else
            printf("%c", str[i]);
        i++;
    }
    return (0);
}
*/

/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
   char texte[10 * 1000 + 1];
   scanf("%[^\n]\n", texte);
   int longueur = strlen(texte);
   for (int iLettre = 0; iLettre < longueur; iLettre = iLettre + 1)
   {
      texte[iLettre] = toupper(texte[iLettre]);
   }
   printf("%s\n",texte);
}
*/