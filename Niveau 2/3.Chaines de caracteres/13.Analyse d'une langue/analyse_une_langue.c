#include <stdio.h>

int     main(void)
{
    char    to_find;
    char    str[1001];
    int     lines;
    int     found;
    int     i;

    scanf("%c", &to_find);
    scanf("%d\n", &lines);
    found = 0;
    i = 0;
    for (i = 0; i < lines; i++) 
    {
        scanf("%[^\n]\n", str);
        while (str[i])
        {
            if (str[i] == to_find)
            {
                found++;
                i++;
            }
            else
                i++;
        }
    }
    printf("%d\n", found);
    return (0);
}

