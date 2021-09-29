#include <stdio.h>

int main(void)
{
    int tot_books;
    int i;

    scanf("%d\n", &tot_books);

    char titles[tot_books][101];

    i = 0;
    while (i < tot_books)
    {
        scanf("%[^\n]%*c\n", titles[i]);
        i++;
    }

    while (tot_books > 0)
    {
        printf("%s\n", titles[tot_books - 1]);
        tot_books--;
    }
    return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   int nbLivres;
   scanf("%d\n", &nbLivres);
   char titres[nbLivres][101];
   for (int idLivre = 0; idLivre < nbLivres; idLivre = idLivre + 1)
   {
      scanf("%[^\n]\n", titres[idLivre]);
   }
   for (int idLivre = nbLivres - 1; idLivre >= 0; idLivre = idLivre - 1)
   {
      printf("%s\n", titres[idLivre]);
   }
}
*/