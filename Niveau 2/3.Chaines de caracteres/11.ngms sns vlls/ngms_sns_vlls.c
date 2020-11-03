#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c);
void    ft_check_char(char *str);

int     main(void)
{
    char    title[101];
    char    name[101];

    scanf("%[^\n]\n", title);
    scanf("%[^\n]", name);
    ft_check_char(title);
    ft_putchar('\n');
    ft_check_char(name);
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_check_char(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I'
                || str[i] == 'O' || str[i] == 'U'
                || str[i] == 'Y' || str[i] == ' ')
            i++;
        else
        {
            ft_putchar(str[i]);
            i++;
        }
    }
}
