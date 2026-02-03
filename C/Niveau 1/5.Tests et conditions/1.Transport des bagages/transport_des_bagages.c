#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        putchar(str[i]);
        i++;
    }
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

void    check_weight(int a, int b)
{
    if ((a * b) > 105)
        putstr("Surcharge !\n");
}

int     main(int ac, char **av)
{
    (void)ac;
    check_weight(atoi(av[1]), atoi(av[2]));
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
    int nbr_paquets;
    int poids_par_paquets;
    int poids_total;

    scanf("%d", &nbr_paquets);
    scanf("%d", &poids_par_paquets);

    poids_total = nbr_paquets * poids_par_paquets;
    
    if (poids_total > 105)
    {
        printf("Surcharge !\n");
    }

    return (0);
}
*/
