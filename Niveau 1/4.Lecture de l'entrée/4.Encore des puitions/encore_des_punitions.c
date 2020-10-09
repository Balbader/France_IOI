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

void    print_str(int nb)
{
    int     i;
    char    *str;

    i = 1;
    str = "Je dois suivre en cours\n";
    while (i <= nb)
    {
        putstr(str);
        i++;
    }
}

int     main(int ac, char **av)
{
    (void)ac;
    print_str(atoi(av[1]));
    return (0);
}

/*
 *NOTE: Le code ci-dessus ne passera pas l'algo de correction du site mais
 *fonctionnera dans ton environnement local.
 *
 *NOTE-2: Le code ci-dessus passera l'algo de correction du site.
 */
/*
#include <stdio.h>

int main()
{
    int line_nbr;
    int i;

    scanf("%d", &line_nbr);

    for (i = 1; i <= line_nbr; i++)
    {
        printf("Je dois suivre en cours\n");
    }

    return (0);
}
*/
