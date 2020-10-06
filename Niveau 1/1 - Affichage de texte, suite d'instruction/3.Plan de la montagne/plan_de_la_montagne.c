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

int     main(void)
{
    char    str[] = "Tout droit tu grimperas,\nLa clé tu trouveras,\nHabile tu seras,\nQuand tu les porteras,\nEt avec le chef tu reviendras !\n";

    putstr(str);
    return (0);
}
