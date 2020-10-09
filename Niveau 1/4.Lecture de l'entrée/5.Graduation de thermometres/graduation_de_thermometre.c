#include <unistd.h>
#include <stdio.h>

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

void    print_temp(int min, int max)
{
    while (min <= max)
    {
        printf("%d\n", min);
        min++;
    }
}

int     main(int ac, char **av)
{
    (void)ac;
    print_temp(atoi(av[1]), atoi(av[2]));
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
    int temp_min;
    int temp_max;
    int i;

    scanf("%d", &temp_min);
    scanf("%d", &temp_max);

    for (i = temp_min; i <= temp_max; i++)
    {
        printf("%d\n", i);
    }

    return (0);
}
*/
