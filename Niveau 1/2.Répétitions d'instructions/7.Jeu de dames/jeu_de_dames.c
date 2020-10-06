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

void    print_char(void)
{
    int     i;
    int     j;

    i = 0;
    j = 0;

    while (i <= 19)
    {
        putstr("OX");
        i++;
    }
    write(1, "\n", 1);
    while (j <= 19)
    {
        putstr("XO");
        j++;
    }
    write(1, "\n", 1);
}

int     main(void)
{
    int     i;

    i = 0;
    while (i <= 19)
    {
        print_char();
        i++;
    }
    return (0);
}
