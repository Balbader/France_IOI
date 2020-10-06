#include <unistd.h>

void    putstr(char  *str)
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
    char    str1[] = "Coucou !\n";
    char    str2[] = "Je m'appelle Camthalion\n";
    char    str3[] = "Ma devise est 'Parler peu mais parler bien'.\n";

    putstr(str1);
    putstr(str2);
    putstr(str3);
    return (0);
}
