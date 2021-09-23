#include <stdio.h>

int convert_name(char *name);
int convert_i(int nb);

int main(void)
{
    char name_a[51];
    char name_b[51];
    int love_count_a;
    int love_count_b;

    scanf("%s %s", name_a, name_b);
    love_count_a = convert_name(name_a);
    love_count_b = convert_name(name_b);
    printf("%d ", love_count_a);
    printf("%d\n", love_count_b);
    return (0);
}

int convert_name(char *name)
{
    int nb;
    int love;
    int i;

    i = 0;
    love = 0;
    nb = 0;
    while (name[i])
    {
        if (name[i] == 'A')
            nb = 0;
        else if (name[i] == 'B')
            nb = 1;
        else if (name[i] == 'C')
            nb = 2;
        else if (name[i] == 'D')
            nb = 3;
        else if (name[i] == 'E')
            nb = 4;
        else if (name[i] == 'F')
            nb = 5;
        else if (name[i] == 'G')
            nb = 6;
        else if (name[i] == 'H')
            nb = 7;
        else if (name[i] == 'I')
            nb = 8;
        else if (name[i] == 'J')
            nb = 9;
        else if (name[i] == 'K')
            nb = 10;
        else if (name[i] == 'L')
            nb = 11;
        else if (name[i] == 'M')
            nb = 12;
        else if (name[i] == 'N')
            nb = 13;
        else if (name[i] == 'O')
            nb = 14;
        else if (name[i] == 'P')
            nb = 15;
        else if (name[i] == 'Q')
            nb = 16;
        else if (name[i] == 'R')
            nb = 17;
        else if (name[i] == 'S')
            nb = 18;
        else if (name[i] == 'T')
            nb = 19;
        else if (name[i] == 'U')
            nb = 20;
        else if (name[i] == 'V')
            nb = 21;
        else if (name[i] == 'W')
            nb = 22;
        else if (name[i] == 'X')
            nb = 23;
        else if (name[i] == 'Y')
            nb = 24;
        else if (name[i] == 'Z')
            nb = 25;
        love += nb;
        i++;
    }
    if (love < 10)
        return (love);
    else
        return (convert_i(love));
}

int convert_i(int nb)
{
    int digit;
    int tot;

    digit = 0;
    tot = 0;
    if (nb < 10)
        return (nb);
    while (nb > 0)
    {
        digit = nb % 10;
        nb = nb / 10;
        tot += digit;
    }
    return (convert_i(tot));
}

/*
#include <stdio.h>

int     split_nbr(int);
int     convert(char*);

int     main(void)
{
    char    name_1[51];
    char    name_2[51];
    int     count_1;
    int     count_2;

    scanf("%s %s", name_1, name_2);

    count_1 = convert(name_1);
    count_2 = convert(name_2);
    if (count_1 < 10)
        printf("%d ", count_1);
    else
    {
        while (!(count_1 < 10))
            count_1 =  split_nbr(count_1);
        printf("%d ", count_1);
    }
    if (count_2 < 10)
        printf("%d\n", count_2);
    else
    {
        while (!(count_2 < 10))
            count_2 =  split_nbr(count_2);
        printf("%d\n", count_2);
    }
    return (0);
}

int     convert(char *str)
{
    char    alpf[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int     arr[26] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int     count;
    int     i;
    int     j;

    count = 0;
    i = 0;
    while (str[i])
    {
        j = 0;
        while (alpf[j] && j < (sizeof(arr) / sizeof(arr[0])))
        {
            if (str[i] == alpf[j])
                count += arr[j];
            j++;
        }
        i++;
    }
    return (count);
}

int     split_nbr(int nbr)
{
    int     mod;
    int     res;

    mod = 0;
    res = 0;

    while (nbr > 0)
    {
        mod = nbr % 10;
        res += mod;
        nbr /= 10;
    }
    return (res);
}
*/

/*
#include <stdio.h>
#include <string.h>
int main()
{
   int nombres[2];
   for (int idPrenom = 0; idPrenom < 2; idPrenom = idPrenom + 1)
   {
      char prenom[51];
      scanf("%s", prenom);
      int nombre = 0;
      int longueurPrenom = strlen(prenom);
      for (int posLettre = 0; posLettre < longueurPrenom; posLettre = posLettre + 1)
      {
         nombre = nombre + (prenom[posLettre] - 'A');
      }
      while (nombre >= 10)
      {
         int sommeChiffre = 0;
         while (nombre > 0)
         {
            sommeChiffre = sommeChiffre + nombre % 10;
            nombre = nombre / 10;
         }
         nombre = sommeChiffre;
      }
      nombres[idPrenom] = nombre;
   }
   printf("%d %d", nombres[0], nombres[1]);
}
*/