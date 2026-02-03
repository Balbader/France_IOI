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
    if (nb <  0 )
    {
        nb *= -1;
        write(1, &nb, 1);
    }
    if (nb >= 10)
        print_nb(nb / 10);
    nb = nb % 10 + '0';
    write(1, &nb, 1);
}

void    print_distance(int a, int b)
{
    int     x;

    x = b - a;
    print_nb(x);
    write(1, "\n", 1);
}

int     main(int ac, char **av)
{
    (void)ac;
    print_distance(atoi(av[1]), atoi(av[2]));
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
    int borne_depart;
    int borne_arrivee;
    int distance_totale;

    scanf("%d %d", &borne_depart, &borne_arrivee);

    distance_totale = borne_arrivee - borne_depart;

    if (distance_totale >= 0)
    {
        printf("%d\n", distance_totale);
    }
    if (distance_totale < 0)
    {
        printf("%d\n", distance_totale * -1);
    }

    return (0);
}
*/
