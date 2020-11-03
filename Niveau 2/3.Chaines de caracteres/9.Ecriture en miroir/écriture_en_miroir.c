#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c);
int     ft_strlen(char *str);

int     main(void)
{
    char    str[1001];
    int     lines;
    int     length;
    int     i;

    scanf("%d\n", &lines);
    while (lines > 0)
    {
        i = 0;
        scanf("%[^\n]\n", str);
        length = ft_strlen(str) - 1;
        i = length;
        while (i >= 0)
        {
            ft_putchar(str[i]);
            i--;
        }
        ft_putchar('\n');
        lines--;
    }
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
