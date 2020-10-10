#include <unistd.h>

int     atoi(char *str)
{
    int     i;
    int     nb;
    int     sign;

    i = 0;
    nb = 0;
    sign = 1;
    while (((str[i] >= 8 && str[i] <= 14) && str[i] == ' ') && str[i])
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

void    cal_socle(int a, int z)
{
    int     count;
    int     temp;

    count = a;
    temp = 0;
    while (a >= z)
    {
        count *= count;
        temp += count;
        a--;
        count = a;
    }
    print_nb(temp);
    write(1, "\n", 1);
}

int     main(int ac, char **av)
{
    (void)ac;
    cal_socle(atoi(av[1]), atoi(av[2]));
    return (0);
}

/*
 *NOTE: Le code ci-dessus ne passera pas l'algo de correction du site mais
 *fonctionnera dans ton environnement local.
 *
 *NOTE-2: Le code ci-dessous passera l'algo de correction du site.
 */
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
    int socle_premier;
    int socle_dernier;
    int volume;
    int volume_total;
    int i;

    volume = 0;
    volume_total = 0;

    scanf("%d", &socle_premier);
    scanf("%d", &socle_dernier);

    for (i = socle_premier; i >= socle_dernier; i--)
    {
        volume = i * i;
        volume_total += volume;
    }
    printf("%d\n", volume_total);

    return (0);
}
*/
