#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
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

void    print_nb(int nb)
{
    if (nb >= 10)
        print_nb(nb / 10);
    nb = nb % 10 + '0';
    putchar(nb);
}


void    print_position(int dep, int lar, int ven)
{
    int     i;

    i = 1;
    while (i <= ven)
    {
        dep += lar;
        print_nb(dep);
        putchar('\n');
        i++;
    }
}


int     main(int ac, char **av)
{
    (void)ac;
    print_nb(atoi(av[1]));
    putchar('\n');
    print_position(atoi(av[1]), atoi(av[2]), atoi(av[3]));
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
    int positionDepart;
    int largeurEmplacement;
    int nbVendeur;
    int positions;
    int i;

    scanf("%d", &positionDepart);
    scanf("%d", &largeurEmplacement);
    scanf("%d", &nbVendeur);

    printf("%d\n", positionDepart);

    for (i = 1; i <= nbVendeur; i++)
    {
        positions = positionDepart + largeurEmplacement;
        positionDepart = positions;
        printf("%d\n", positions);
    }

    return (0);
}
*/
