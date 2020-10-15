#include <unistd.h>

int     ft_atoi(char *str)
{
    int     i;
    int     nb;
    int     sign;

    i = 0;
    nb = 0;
    sign = 1;
    while (str[i] && ((str[i] >= 8 && str[i] <= 14) || str[i] == ' '))
        i++;
    if (str[i] == '-')
        sign *= -1;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (sign * nb);
}

void    ft_check_month(int nb)
{
    if (nb == 11)
    {
        write(1, "29", 2);
        write(1, "\n", 2);
    }
    if ((nb >= 1 && nb <= 3) || (nb >= 7 && nb <= 9))
    {
        write(1, "30", 2);
        write(1, "\n", 2);
    }
    if ((nb >= 4 && nb <= 6) || (nb == 10))
    {
        write(1, "31", 2);
        write(1, "\n", 2);
    }
}

int     main(int ac, char **av)
{
    (void)ac;
    ft_check_month(ft_atoi(av[1]));
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
    int     mois;

    mois = 0;
    scanf("%d", &mois);
    if (mois == 11)
        printf("%d\n", 29);
    if ((mois >= 1 && mois <= 3) || (mois >= 7 && mois <= 9))
        printf("%d\n", 30);
    if ((mois >= 4 && mois <= 6) || (mois == 10))
        printf("%d\n", 31);
    return (0);
}
*/
