#include <stdio.h>

int     main(void)
{
    int     nbr_of_entries;
    int     i;
    double  imput;
    char    type;
    char    p;
    char    l;
    char    f;

    p = 'p';
    l = 'l';
    f = 'f';

    scanf("%d", &nbr_of_entries);

    for (i = 0; i < nbr_of_entries; i++)
    {
        scanf("%lf %c", &imput, &type);
        
        if (type == 'm')
        {
            double  foot;
            foot = imput / 0.3048;
            printf("%lf %c\n", foot, p);
        }
        if (type == 'g')
        {
            double  pds;
            pds = imput * 0.002205;
            printf("%lf %c\n", pds, l);
        }
        if (type == 'c')
        {
            double  far;
            far = (1.8 * imput) + 32;
            printf("%lf %c\n", far, f);
        }

        imput = 0;
        type = ' ';
    }
    return 0;
}

