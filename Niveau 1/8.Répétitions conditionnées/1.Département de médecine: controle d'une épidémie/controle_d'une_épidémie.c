#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_atoi(char *str)
{
    int     i;
    int     nb;
    int     sign;

    i = 0;
    nb = 0;
    sign = 1;
    while (str[i] && ((str[i] >= 8 && str[i] <= 14) && str[i] == ' '))
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

void    ft_putnbr(int nb)
{
    if (nb ==  -2147483648)
    {
        ft_putnbr(-214748364);
        ft_putnbr(8);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    nb = nb % 10 + '0';
    ft_putchar(nb);
}

void    ft_check_breakpoint(int pop)
{
    int     sick_nbr;
    int     day_count;

    sick_nbr = 1;
    day_count = 1;
    while (sick_nbr < pop)
    {
        sick_nbr = sick_nbr + (sick_nbr * 2);
        day_count += 1;
    }
    printf("%d\n", day_count);
}

int     main(int ac, char **av)
{
    (void)ac;
    ft_check_breakpoint(ft_atoi(av[1]));
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
    int pop_tot_ville;
    int contamine;
    int jour_de_contamination;

    scanf("%d", &pop_tot_ville);
    contamine = 1;
    jour_de_contamination = 1;
    while (contamine < pop_tot_ville)
    {
        contamine = contamine + (contamine * 2);
        jour_de_contamination++;
    }
    printf("\n%d\n", jour_de_contamination);
    return (0);
}
*/
