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
    int     i;
    char    *str;

    i = 135;
    str = "Je dois respecter le Grand Sorcier.\n";
    while (i >= 0)
    {
        putstr(str);
        i--;
    }
    return (0);
}
