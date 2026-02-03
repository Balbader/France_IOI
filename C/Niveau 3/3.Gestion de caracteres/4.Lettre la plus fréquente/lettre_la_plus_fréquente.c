#include <stdio.h>
#include <string.h>
#include <unistd.h>

void to_upper(char *);
void freq_counter(char *);

int main(void)
{
    char str[10001];
    scanf("%[^\n]", str);
    to_upper(str);
    freq_counter(str);
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

void freq_counter(char *str)
{
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char res;
    int letter_counter[26] = {0};
    int temp;
    int i;
    int j;

    temp = 0;
    i = 0;
    while (str[i])
    {
        j = 0;
        while (alphabet[j])
        {
            if (str[i] == alphabet[j])
            {
                letter_counter[j] += 1;
            }
            j++;
        }
        i++;
    }

    i = 0;
    while (i < 25)
    {
        if (temp < letter_counter[i])
        {
            temp = letter_counter[i];
            res = alphabet[i];
        }
        i++;
    }
    printf("%c\n", res);
}

/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
   char texte[10 * 1000 + 1];
   scanf("%[^\n]\n", texte);

   int nbOccurrences[26] = {0};
   int longueurTexte = strlen(texte);
   for (int idCaractere = 0; idCaractere < longueurTexte; idCaractere = idCaractere + 1)
   {
      char caractereLu = texte[idCaractere];
      if (caractereLu != ' ')
      {
         int indiceLettre = toupper(caractereLu) - 'A';
         nbOccurrences[indiceLettre] = nbOccurrences[indiceLettre] + 1;
      }
   }
   int indiceLettreMaxOcc = 0;
   for (int indiceLettre = 0; indiceLettre < 26; indiceLettre = indiceLettre + 1)
   {
      if (nbOccurrences[indiceLettre] > nbOccurrences[indiceLettreMaxOcc])
      {
         indiceLettreMaxOcc = indiceLettre;
      }
   }
   printf("%c\n", indiceLettreMaxOcc + 'A');
}
*/
