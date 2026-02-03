#include <stdio.h>

int main(void)
{
    int nbr_of_entries;
    int i;
    double imput;
    char type;
    char p;
    char l;
    char f;

    p = 'p';
    l = 'l';
    f = 'f';
    scanf("%d", &nbr_of_entries);
    for (i = 0; i < nbr_of_entries; i++)
    {
        scanf("%lf %c", &imput, &type);
        if (type == 'm')
        {
            double foot;
            foot = imput / 0.3048;
            printf("%lf %c\n", foot, p);
        }
        if (type == 'g')
        {
            double pds;
            pds = imput * 0.002205;
            printf("%lf %c\n", pds, l);
        }
        if (type == 'c')
        {
            double far;
            far = (1.8 * imput) + 32;
            printf("%lf %c\n", far, f);
        }
        imput = 0;
        type = ' ';
    }
    return 0;
}

/*
#include <stdio.h>

double   to_feet(double);
double   to_pound(double);
double   to_farh(double);

int     main(void)
{
    int     tot_calc;
    double  nbr;
    char    unit;

    scanf("%d\n", &tot_calc);

    while (tot_calc > 0)
    {
        scanf("%lf %c", &nbr, &unit);
        if (unit == 'm')
            to_feet(nbr);
        if (unit == 'g')
            to_pound(nbr);
        if (unit == 'c')
            to_farh(nbr);
        tot_calc--;
        nbr = 0.0;
        unit = ' ';
    }
    return (0);
}


double   to_feet(double nbr)
{
    double res;
    res = nbr / 0.3048;
    printf("%lf %c\n", res, 'p');
    return (0);
}

double   to_pound(double nbr)
{
    double res;
    res = nbr * 0.002205;
    printf("%lf %c\n", res, 'l');
    return (0);
}

double   to_farh(double nbr)
{
    double res;
    res = (nbr * 1.8) + 32;
    printf("%lf %c\n", res, 'f');
    return (0);
}
*/
