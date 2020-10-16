#include <unistd.h>
void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

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

void    ft_check_friends(int a1, int a2, int b1, int b2)
{
    if ((a1 < b1 && a2 < b1) || (b1 < a1 && b2 < a1))
        ft_putstr("Pas amis\n");
    else
        ft_putstr("Amis\n");
}

int     main(int ac, char **av)
{
    (void)ac;
    ft_check_friends(ft_atoi(av[1]), ft_atoi(av[2]),
            ft_atoi(av[3]), ft_atoi(av[4]));
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
    int     a1;
    int     a2;
    int     b1;
    int     b2;

    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    if ((a1 < b1 && a2 < b1) || (b1 < a1 && b2 < a1))
        printf("Pas amis\n");
    else
        printf("Amis\n");
    return (0);
}
*/





















