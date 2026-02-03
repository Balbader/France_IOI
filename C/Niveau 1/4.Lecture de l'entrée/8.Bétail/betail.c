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
    if (nb >= 10)
        print_nb(nb / 10);
    nb = nb % 10 + '0';
    write(1, &nb, 1);
}

int     main(int ac, char **av)
{
    int     i;
    int     count;

    i = 1;
    count = 0;
    while (i <= ac && av[i] != NULL)
    {
        count += atoi(av[i]);
        i++;
    }
    print_nb(count);
    write(1, "\n", 1);
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
    int karvas_par_habitant;
    int karvas_total;
    int i;

    karvas_total = 0;

    for (i = 1; i <= 20; i++)
    {
        scanf("%d", &karvas_par_habitant);
        karvas_total = karvas_total + karvas_par_habitant;
    }
    printf("%d\n", karvas_total);

    return (0);
}
*/
