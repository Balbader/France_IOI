#include <stdio.h>

void    check_char(char*);

int     main(void)
{
    int     tot_names;
    char    name[101];

    scanf("%d\n", &tot_names);
    while (tot_names > 0)
    {
        scanf("%[^\n]\n", name);
        check_char(name);
        tot_names--;
    }
    return (0);
}

void    check_char(char *str)
{
    int     i;
    int     counter;

    counter = 0;
    i = 0;

    if (str[0] >= '0' && str[0] <= '9')
    {
        counter += 1;
        i++;
    }

    while (str[i])
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z')
                    || (str[i] >= 'a' && str[i] <= 'z')
                    || (str[i] >= '0' && str[i] <= '9')
                    || str[i] == '_'))
            counter += 1;
        i++;
    }
    if (counter == 0)
        printf("YES\n");
    else
        printf("NO\n");
}

