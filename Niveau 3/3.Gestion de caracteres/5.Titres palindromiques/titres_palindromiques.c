#include <stdio.h>
#include <string.h>
#include <unistd.h>

void reverse(char *);
void to_lower(char *);
char *remove_white_spaces(char *);
int ft_strlen(char *);

int main(void)
{
    int tot_books;
    char title[101];
    char temp[101];
    char temp2[101];

    scanf("%d\n", &tot_books);

    while (tot_books > 0)
    {
        scanf("%[^\n]\n", title);
        strcpy(temp, title);
        to_lower(title);
        remove_white_spaces(title);
        strcpy(temp2, title);
        reverse(temp2);
        if (strcmp(temp2, title) == 0)
            printf("%s\n", temp);
        tot_books--;
    }
    return (0);
}

void reverse(char *str)
{
    char temp;
    int len;
    int i;

    len = ft_strlen(str);
    i = 0;
    while (i < (len / 2))
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        i++;
    }
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
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

char *remove_white_spaces(char *str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    return str;
}

/*
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
int main()
{
   int nbLivres;
   scanf("%d\n", &nbLivres);
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      char titre[101];
      scanf("%[^\n]\n", titre);
      bool estPalindrome = true;
      int debut = 0, fin = strlen(titre) - 1;
      while (debut < fin)
      {
         if (titre[debut] == ' ')
         {
            debut = debut + 1;
         }
         else if (titre[fin] == ' ')
         {
            fin = fin - 1;
         }
         else
         {
            if (toupper(titre[debut]) != toupper(titre[fin]))
            {
               estPalindrome = false;
            }
            debut = debut + 1;
            fin = fin - 1;
         }
      }
      if (estPalindrome)
      {
         printf("%s\n", titre);
      }
   }
}
*/