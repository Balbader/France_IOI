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
    while (str[i] >= '0' && str[i] <= '9' && str[i])
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (sign * nb);
}

void    define_price(int nb)
{
    if (nb > 21)
        putstr("Tarif plein\n");
    else
        putstr("Tarif réduit\n");
}

int     main(int ac, char **av)
{
    (void)ac;
    define_price(atoi(av[1]));
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
    int age;

    scanf("%d", &age);

    if (age < 21)
    {
        printf("Tarif réduit\n");
    }
    else
    {
        printf("Tarif plein\n");
    }

    return (0);
}
*/
