#include <unistd.h>
#include <stdio.h>

void    ft_putstr(char *str)
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
    int     lines;
    char    text[101];
    int     i;

    scanf("%d\n", &lines);
    for (i = 0; i < lines; i++)
    {
        scanf("%[^\n]\n", text);
        if (i % 2 == 0)
        {
            ft_putstr(text);
            write(1, "\n", 1);
        }
    }
    return (0);
}
