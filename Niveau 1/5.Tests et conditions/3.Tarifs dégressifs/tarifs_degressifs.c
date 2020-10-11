#include <unistd.h>

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
        print_nb(nb  / 10);
    nb = nb % 10 + '0';
    write(1, &nb, 1);
}

void    print_price(int nb)
{
    int     price;

    price = 0;
    if (nb > 8)
    {
        price = 53;
        print_nb(price);
    }
    if (nb <= 8)
    {
        price = 10 + (nb * 5);
        print_nb(price);
    }
}

int     main(int ac, char **av)
{
    (void)ac;
    print_price(atoi(av[1]));
    write(1, "\n", 1);
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
    int heure_arrivee;
    int prix_de_base;
    int prix_par_heure;
    int prix_max;
    int prix_chambre;

    prix_de_base = 10;
    prix_par_heure = 5;
    prix_max = 53;

    scanf("%d", &heure_arrivee);

    prix_chambre = prix_de_base + (heure_arrivee * prix_par_heure);

    if (prix_chambre < prix_max)
    {
        printf("%d\n", prix_chambre);
    }
    else
    {
        printf("%d\n", prix_max);
    }

    return (0);
}
*/
