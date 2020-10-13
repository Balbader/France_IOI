#include <unistd.h>
#include <limits.h>

int     atoi(char *str)
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
    int     longest_walk;
    
    i = 2;
    longest_walk = INT_MIN;
    while (i < ac)
    {
        if (atoi(av[i]) > longest_walk)
            longest_walk = atoi(av[i]);
        i++;
    }
    print_nb(longest_walk);
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
int     main(void)
{
    int     walk_days;
    int     walk_amount;
    int     longest_walk;
    
    scanf("%d", &walk_days);
    longest_walk = 0;
    while (walk_days >= 1)
    {
        scanf("%d", &walk_amount);
        if (walk_amount > longest_walk)
            longest_walk = walk_amount;
        walk_days--;
    }
    printf("%d\n", longest_walk);
    return (0);
}
*/
