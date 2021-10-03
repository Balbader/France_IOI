#include <stdio.h>
#include <string.h>

void to_lower(char *str);
char beautify(char *str);
void acronyme(char *acr, char *str);

int main(void)
{
    char acr[201];
    char temp[201];
    int tot_books;
    int i;
    int j;
    int space_count;

    scanf("%s", acr);
    scanf("%d\n", &tot_books);

    char titles[tot_books][201];

    i = 0;
    while (i < tot_books)
    {
        scanf("%[^\n]%*c\n", temp);

        // temp to lower case
        to_lower(temp);

        // Count tot amount of ' '
        j = 0;
        space_count = 0;
        while (temp[j])
        {
            if (temp[j] == ' ')
            {
                space_count += 1;
                j++;
            }
            j++;
        }

        if (space_count == 1)
        {
            // put the string in desired printing format
            beautify(temp);
            printf("%s\n", temp);

            // copy temp to titles[]
            /*strcpy(titles[i], temp);*/
        }
        // empty temp
        memset(temp, 0, sizeof(temp));
        i++;
    }

    /*i = 0;*/
    /*while (i < tot_books)*/
    /*{*/
        /*printf("titles[i]: %s\n", titles[i]);*/
        /*acronyme(acr, titles[i]);*/
        /*i++;*/
    /*}*/
    return (0);
}

void to_lower(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

char beautify(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[0] >= 'a' && str[0] <= 'z')
            str[0] -= 32;
        if (str[i] == ' ')
        {
            i++;
            str[i] -= 32;
        }
        i++;
    }
    return (*str);
}

// Fonction pour trouver les phrases en relation avec l'acronyme
void acronyme(char *acr, char *str)
{
    int i;
    int j;
    int count;

    count = 0;
    i = 0;
    while (str[i])
    {
        j = 0;
        while (acr[j])
        {
            if (acr[j] == str[i])
                count += 1;
            else
                i++;
            j++;
        }
        i++;
    }
    if (count == 2)
        printf("%s\n", str);
}

/*
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
int main()
{
   char acronyme[201];
   scanf("%s\n", acronyme);
   int longueurAcronyme = strlen(acronyme);
   int nbTitres;
   scanf("%d\n", &nbTitres);
   for (int idTitre = 0; idTitre < nbTitres; idTitre = idTitre + 1)
   {
      char titre[201];
      scanf("%[^\n]\n", titre);
      int longueurTitre = strlen(titre);
      bool estValide = true;
      int indiceAcro = 0;
      for (int pos = 0; pos < longueurTitre; pos = pos + 1)
      {
         if (pos == 0 || titre[pos-1] == ' ')
         {
            char lettre = toupper(titre[pos]);
            if (indiceAcro >= longueurAcronyme || lettre != acronyme[indiceAcro])
            {
               estValide = false;
            }
            indiceAcro = indiceAcro + 1;
         }
      }
      if (indiceAcro != longueurAcronyme)
      {
         estValide = false;
      }
      if (estValide)
      {
         for (int pos = 0; pos < longueurTitre; pos = pos + 1)
         {
            if (pos == 0 || (titre[pos-1] == ' ' && isalpha(titre[pos])))
            {
               printf("%c", toupper(titre[pos]));
            }
            else
            {
               printf("%c", tolower(titre[pos]));
            }
         }
         printf("\n");
      }
   }
}
*/
