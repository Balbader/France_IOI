#include <stdio.h>

int     main(void)
{
    char    letter;
    letter = 'A';
    while (letter < 'Z' + 1)
    {
        printf("%c", letter);
        if (letter != 'Z')
            printf(" ");
        letter++;
    }
    return (0);
}
