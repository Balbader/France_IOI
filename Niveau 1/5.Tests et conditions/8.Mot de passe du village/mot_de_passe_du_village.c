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

void    check_code(int nb)
{
    if (nb == 64741)
        putstr("Bon festin !\n");
    else
        putstr("Allez-vous en!\n");
}

int     main(int ac, char **av)
{
    (void)ac;
    check_code(atoi(av[1]));
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
    int code;

    scanf("%d", &code);

    if (code == 64741)
    {
        printf("Bon festin !\n");
    }
    else
    {
        printf("Allez-vous en !\n");
    }

    return (0);
}
*/
