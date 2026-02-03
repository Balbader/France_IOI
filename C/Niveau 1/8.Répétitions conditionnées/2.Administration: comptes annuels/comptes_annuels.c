#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int nb;
    int sign;

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
    return (nb * sign);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putnbr(-214748364);
        ft_putnbr(8);
        return;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    nb = nb % 10 + '0';
    write(1, &nb, 1);
}

int main(int ac, char **av)
{
    (void)ac;
    int i;
    int tot;

    i = 1;
    tot = 0;
    while (ft_atoi(av[i]) != ft_atoi("-1"))
    {
        tot += ft_atoi(av[i]);
        i++;
    }
    ft_putnbr(tot);
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

int     main(void)
{
    int     tot;
    int     i;

    tot = 0;
    i = 0;
    while (i != -1)
    {
        scanf("%d", &i);
        tot += i;
    }
    if (i == -1)
       printf("%d\n", tot + 1);
    return (0);
}

#include <stdio.h>

int main(void)
{
    int i = 1000000000;
    int nbr;
    int tmp;
    scanf("%d", &nbr);
    tmp = nbr;
    if (nbr == -1)
        printf("%d\n", 0);
    else
    {
        while (i > 0)
        {
            scanf("%d", &nbr);
            if (nbr == -1)
            {
                printf("%d\n", tmp);
                break ;
            }
            tmp += nbr;
            i--;
        }
    }
    return (0);
}

*/
