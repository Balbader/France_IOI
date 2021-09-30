#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strcmp(char *, char *);
int compare_words(const void *, const void *);

int main(void)
{
    int nbr_words;
    char word_1[51];
    char word_2[51];
    char arr[1001][256];
    int i;

    scanf("%d", &nbr_words);

    char temp_word_1[nbr_words][51];
    char temp_word_2[nbr_words][51];

    i = 0;
    while (i < nbr_words)
    {
        scanf("%s ", word_1);
        strcpy(temp_word_1[i], word_1);
        scanf("%s", word_2);
        strcpy(temp_word_2[i], word_2);
        strcat(arr[i], temp_word_2[i]);
        strcat(arr[i], " ");
        strcat(arr[i], temp_word_1[i]);
        i++;
    }

    qsort(arr, nbr_words, 256 * sizeof(char), compare_words);

    i = 0;
    while (i < nbr_words)
    {
        printf("%s\n", arr[i]);
        i++;
    }
    return (0);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int compare_words(const void *s1, const void *s2)
{
    return (ft_strcmp((char *)(s1), (char *)(s2)));
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compareTextes(const void* pTexte1, const void* pTexte2)
{
  return strcmp((char*)(pTexte1), (char*)(pTexte2) );
}
int main()
{
   int nbMots;
   scanf("%d\n", &nbMots);
   // Deux mots de taille 50 + l’espace + 1
   char couplesMots[nbMots][102];
   for (int idCouple = 0; idCouple < nbMots; idCouple = idCouple + 1)
   {
      char premier[51], second[51];
      scanf("%s%s", premier, second);
      strcpy(couplesMots[idCouple], second);
      strcat(couplesMots[idCouple], " ");
      strcat(couplesMots[idCouple], premier);
   }
   qsort(couplesMots, nbMots, 102 * sizeof(char), compareTextes);
   for (int idCouple = 0; idCouple < nbMots; idCouple = idCouple + 1)
   {
      printf("%s\n", couplesMots[idCouple]);
   }
}
*/
