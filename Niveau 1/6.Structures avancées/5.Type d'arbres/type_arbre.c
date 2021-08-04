#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

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
    return (sign * nb);
}

void check_type(int ht, int nbr)
{
    if (ht <= 5 && nbr >= 8)
        ft_putstr("Tinuviel\n");
    if (ht >= 10 && nbr >= 10)
        ft_putstr("Calaelen\n");
    if (ht <= 8 && nbr <= 5)
        ft_putstr("Falarion\n");
    if (ht >= 12 && nbr <= 7)
        ft_putstr("Dorthonion\n");
}

int main(int ac, char **av)
{
    (void)ac;
    check_type(ft_atoi(av[1]), ft_atoi(av[2]));
    return (0);
}
/*
 *NOTE: Le code ci-dessus ne passera pas l'algo de correction du site mais
 *fonctionnera dans ton environnement local.
 *
 *NOTE-2: Le code ci-dessous passera l'algo de correction du site.
 */
#include <stdio.h>

int main()
{
    int hauteur;
    int feuilles;

    scanf("%d", &hauteur);
    scanf("%d", &feuilles);
    if (hauteur <= 5 && feuilles >= 8)
        printf("Tinuviel\n");
    if (hauteur >= 10 && feuilles >= 10)
        printf("Calaelen\n");
    if (hauteur <= 8 && feuilles <= 5)
        printf("Falarion\n");
    if (hauteur >= 12 && feuilles <= 7)
        printf("Dorthonion\n");
    return (0);
}
