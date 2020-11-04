#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c);
void    ft_print(char c, int len);

int     main(void)
{
    int     len;

    scanf("%d", &len);
    ft_print('X', len);
    ft_print('#', len);
    ft_print('i', len);
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print(char c, int len)
{
    int     i;

    i = 0;
    while (i < len)
    {
        ft_putchar(c);
        i++;
    }
    ft_putchar('\n');
}
