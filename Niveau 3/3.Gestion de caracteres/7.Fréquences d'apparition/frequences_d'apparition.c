#include <stdio.h>

char *remove_white_spaces(char *);
char to_lower(char *);
void freq_counter(char *);
int count_letter(char *);
int ft_strlen(char *);

int main(void)
{
    char str[10001];
    int i;

    scanf("%[^\n]", str);
    remove_white_spaces(str);
    to_lower(str);
    freq_counter(str);
    return (0);
}

char *remove_white_spaces(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}

char to_lower(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (*str);
}

void freq_counter(char *str)
{
    char arr[26] = "abcdefghijklmnopqrstuvwxyz";
    int counts[26] = {0};
    int i;
    int j;
    int tot_letter;
    double res;

    tot_letter = count_letter(str);
    res = 0.0;
    i = 0;
    while (str[i])
    {
        j = 0;
        while (arr[j])
        {
            if (str[i] == arr[j])
            {
                counts[j] += 1;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 26)
    {
        res = ((double)counts[i] / (double)tot_letter);
        printf("%lf\n", res);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int count_letter(char *str)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            count++;
        i++;
    }
    return (count);
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char texte[10001];
   scanf("%[^\n]\n", texte);
   int nbApparitions[26] = {0};
   int nbLettres = 0;
   int longueurTexte = strlen(texte);
   for (int iCar = 0; iCar < longueurTexte; iCar = iCar + 1)
   {
      char caractere = texte[iCar];
      if (isalpha(caractere))
      {
         nbLettres = nbLettres + 1;
         if (islower(caractere))
         {
            caractere = toupper(caractere);
         }
         int num = caractere - 'A';
         nbApparitions[num] = nbApparitions[num] + 1;
      }
   }
   for (int idLettre = 0; idLettre < 26; idLettre = idLettre + 1)
   {
      printf("%lf\n", (double)(nbApparitions[idLettre]) / nbLettres);
   }
}
*/