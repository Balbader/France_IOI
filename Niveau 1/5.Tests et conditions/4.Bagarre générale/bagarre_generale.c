#include <unistd.h>

void    putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
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
    while (str[i] >='0' && str[i] <= '9' && str[i])
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (sign * nb);
}

void    check_winner(int arignon, int evaran)
{
    if (arignon - evaran > 10)
        putstr("La famille Arignon a un champ trop grand\n");
    if (evaran - arignon > 10)
        putstr("La famille Evaran a un champ trop grand\n");
    else 
        write(1, "\n", 1);
}

int     main(int ac, char **av)
{
    (void)ac;
    check_winner(atoi(av[1]), atoi(av[2]));
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
    int sup_arignon;
    int sup_evaran;

    scanf("%d", &sup_arignon);
    scanf("%d", &sup_evaran);

    if ((sup_arignon - sup_evaran) > 10)
    {
        printf("La famille Arignon a un champ trop grand\n");
    }
    if ((sup_evaran - sup_arignon) > 10)
    {
        printf("La famille Evaran a un champ trop grand\n");
    }
    else
    {
        printf(" ");
    }

    return (0);
}
*/
