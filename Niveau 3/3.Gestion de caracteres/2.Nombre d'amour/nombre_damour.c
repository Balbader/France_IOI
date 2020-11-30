#include <stdio.h> 

int     convert_name(char *name);
int     convert_i(int nb);

int     main(void)
{
    char    name_a[51];
    char    name_b[51];
    int     love_count_a;
    int     love_count_b;

    scanf("%s %s", name_a, name_b);
    love_count_a = convert_name(name_a);
    love_count_b = convert_name(name_b);
    printf("%d ", love_count_a);
    printf("%d\n", love_count_b);
    return (0);
}

int     convert_name(char *name)
{
    int     nb;
    int     love;
    int     i;

    i = 0;
    love = 0;
    nb = 0;
    while (name[i])
    {
        if (name[i] == 'A')
            nb = 0;
        else if (name[i] == 'B')
            nb = 1;
        else if (name[i] == 'c')
            nb = 2;
        else if (name[i] == 'D')
            nb = 3;
        else if (name[i] == 'E')
            nb = 4;
        else if (name[i] == 'F')
            nb = 5;
        else if (name[i] == 'G')
            nb = 6;
        else if (name[i] == 'H')
            nb = 7;
        else if (name[i] == 'I')
            nb = 8;
        else if (name[i] == 'J')
            nb = 9;
        else if (name[i] == 'K')
            nb = 10;
        else if (name[i] == 'L')
            nb = 11;
        else if (name[i] == 'M')
            nb = 12;
        else if (name[i] == 'N')
            nb = 13;
        else if (name[i] == 'O')
            nb = 14;
        else if (name[i] == 'P')
            nb = 15;
        else if (name[i] == 'Q')
            nb = 16;
        else if (name[i] == 'R')
            nb = 17;
        else if (name[i] == 'S')
            nb = 18;
        else if (name[i] == 'T')
            nb = 18;
        else if (name[i] == 'U')
            nb = 19;
        else if (name[i] == 'V')
            nb = 20;
        else if (name[i] == 'W')
            nb = 21;
        else if (name[i] == 'X')
            nb = 22;
        else if (name[i] == 'Y')
            nb = 23;
        else if (name[i] == 'Z')
            nb = 24;
        if (nb < 10)
        {
            love++;
        }
        else if (nb >= 10)
        {
            convert_i(nb);
        }
        i++;
    }
    return (love);
}

int     convert_i(int nb)
{
    int     digit;
    int     tot;

    digit = 0;
    tot = 0;
    while(nb > 0)
    {
        digit = nb % 10;
        nb = nb / 10;
        tot += digit;
    }
    return (nb);
}
