#include <stdio.h>
#include <string.h>

void to_upper(char *str);

int main(void)
{
    char str[1001];
    char temp[1001];
    char code_min[27];
    char code_maj[27];
    char maj_alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char min_alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    int i;
    int j;

    scanf("%[^\n]\n", code_min);
    scanf("%[^\n]", str);

    strcpy(temp, str);
    strcpy(code_maj, code_min);
    to_upper(code_maj);

    i = 0;
    while (str[i] && temp[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            j = 0;
            while (maj_alphabet[j] && code_maj[j])
            {
                if (maj_alphabet[j] == str[i])
                {
                    temp[i] = code_maj[j];
                }
                j++;
            }
        }

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            j = 0;
            while (min_alphabet[j] && code_min[j])
            {
                if (min_alphabet[j] == str[i])
                {
                    temp[i] = code_min[j];
                }
                j++;
            }
        }
        i++;
    }

    printf("%s\n", temp);
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
}

/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
   char decrypteur[27];
   char texte[1001];

   scanf("%[^\n]\n", decrypteur);
   scanf("%[^\n]\n", texte);
   int longueurTexte = strlen(texte);
   for (int pos = 0; pos < longueurTexte; pos = pos + 1)
   {
      char caractereLu = texte[pos];
      if (isalpha(caractereLu))
      {
         if (isupper(caractereLu))
         {
            caractereLu = toupper(decrypteur[tolower(caractereLu) - 'a']);
         }
         else
         {
            caractereLu = decrypteur[caractereLu - 'a'];
         }
      }
      printf("%c", caractereLu);
   }
   printf("\n");
}
*/