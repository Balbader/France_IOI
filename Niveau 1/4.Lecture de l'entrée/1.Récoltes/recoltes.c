#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    print_nb(int nb)
{
    if (nb >= 10)
        print_nb(nb / 10);
    nb = nb % 10 + 48;
    putchar(nb);
}

int     ft_atoi(char *str)
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

void    recoltes(int nb)
{
    int     meter;
    int     tot_recolte;

    meter = 23;
    tot_recolte = (nb * nb) * meter;
    print_nb(tot_recolte);
}

int     main(int ac, char **av)
{
    (void)ac;
    recoltes(ft_atoi(av[1]));
    return (0);
}

/*
 *NOTE: Le code ci-dessus ne passera pas l'algo de correction du site mais
 *fonctionnera dans ton environnement local.
 *
 *NOTE-2: Le code ci-dessus passera l'algo de correction du site.
 */
/*
#include <stdio.h>

int main()
{
    int longeur;
    int metre;
    int recolte_totale;

    metre = 23;
    scanf("%d", &longeur);
    recolte_totale = (longeur * longeur) * metre;
    printf("%d\n", recolte_totale);

    return (0);
}
*/
