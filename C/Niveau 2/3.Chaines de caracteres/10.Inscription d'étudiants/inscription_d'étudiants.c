#include <stdio.h>

void check_name(char *str);

int main(void)
{
    char str[51];

    scanf("%[^\n]", str);
    check_name(str);
    return (0);
}

void check_name(char *str)
{
    int i;

    i = 0;
    if (str[i] <= 'F')
        printf("1");
    if (str[i] >= 'G' && str[i] <= 'P')
        printf("2");
    if (str[i] >= 'Q' && str[i] <= 'Z')
        printf("3");
}

/*
#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(void)
{
    char    name[51];
    scanf("%s", name);
    if (name[0] <= 'F')
    {
        ft_putchar('1');
    }
    else if (name[0] <= 'P')
    {
        ft_putchar('2');
    }
    else
    {
        ft_putchar('3');
    }
    return (0);
}

*/