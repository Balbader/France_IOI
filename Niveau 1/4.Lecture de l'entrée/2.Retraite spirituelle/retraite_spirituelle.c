#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

int     my_atoi(char *str)
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

void    days_count(int nb)
{
    int     base;
    int     repet;

    base = (60 * 60) * 16;
    repet = nb * base;
    print_nb(repet);
}

int     main(int ac, char **av)
{
    (void)ac;
    days_count(my_atoi(av[1]));
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

int main(void)
{
    int nbr_jr;
    int incantation_1jr;
    int total_incantations;

    incantation_1jr = 115200 / 2;

    scanf("%d", &nbr_jr);
    total_incantations = incantation_1jr * nbr_jr;
    printf("%d\n", total_incantations);

    return (0);
}
*/
