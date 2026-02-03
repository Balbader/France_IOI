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

int    atoi(char *str)
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

void    define_tax(int  a, int b)
{
    if ((a + b) >= 10)
    {
        putstr("Taxe spéciale !\n");
        print_nb(36);
        write(1, "\n", 1);
    }
    else
    {
        putstr("Taxe réguliere !\n");
        print_nb((a + b) * 2);
        write(1, "\n", 1);
    }
}

int     main(int ac, char **av)
{
    (void)ac;
    define_tax(atoi(av[1]), atoi(av[2]));
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
    int des_un;
    int des_deux;
    int tax_spe;
    int tax_reg;

    scanf("%d", &des_un);
    scanf("%d", &des_deux);

    if ((des_un + des_deux) >= 10)
    {
        tax_spe = 36;
        printf("Taxe spéciale !\n");
        printf("%d\n", tax_spe);
    }
    if ((des_un + des_deux) < 10)
    {
        tax_reg = (des_un + des_deux) * 2;
        printf("Taxe régulière\n");
        printf("%d\n", tax_reg);
    }

    return (0);
}
*/
