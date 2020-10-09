#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

int     atoi(char *str)
{
    int     i;
    int     nb;
    int     sign;

    i = 0;
    nb = 0;
    sign = 1;
    while (((str[i] >= 8 && str[i] <= 14) || str[i] == ' ') && str[i])
        i++;
    if (str[i] == '-')
        sign *= -1;
    while (str[i] >= '0' && str[i] <= '9' && str[i])
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (sign * nb);
}

void    print_nb(int nb)
{
    if (nb >= 10)
        print_nb(nb / 10);
    nb = nb % 10 + '0';
    putchar(nb);
}

void    print_results(int nb)
{
    int     i;
    int     count;
    
    i = 1;
    count = 66;
    while (i <= nb)
    {
        count *= i;
        print_nb(count);
        putchar('\n');
        i++;
    }
}

int     main(int ac, char **av)
{
    (void)ac;
    print_results(atoi(av[1]));
    return (0);
}
/*
 *NOTE: Le code ci-dessus ne passera pas l'algo de correction du site mais
 *fonctionnera dans ton environnement local.
 *
 *NOTE-2: Le code ci-dessous passera l'algo de correction du site.
 */
/*
#include <stdio.h>

int main()
{
    int nbNombres;
    int nb_calcul;
    int resultat;
    int i;

    nbNombres = 66;
    scanf("%d", &nb_calcul);

    for (i = 1; i <= nb_calcul; i++)
    {
        resultat = nbNombres * i;
        nbNombres = resultat;
        printf("%d\n", resultat);
    }

    return (0);
}
*/
















