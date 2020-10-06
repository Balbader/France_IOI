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

void    print_str(char *str)
{
    int     i;

    i = 29;
    while (i >= 0)
    {
        putstr(str);
        i--;
    }
    write (1, "\n", 1);
}

int     main(void)
{
    print_str("a_");
    print_str("b_");
    print_str("c_");
    return (0);
}
