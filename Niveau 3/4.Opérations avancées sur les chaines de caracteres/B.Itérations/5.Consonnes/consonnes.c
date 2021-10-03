#include <stdio.h>

int     main(void)
{
    char    voy[6] = "aeiouy";
    char    letter;
    int     i;

    letter = 'b';
    while (letter < 'z' + 1)
    {
        i = 0;
        while (voy[i])
        {
            if(letter == voy[i])
                letter++;
            i++;
        }
        printf("%c", letter);
        if (letter != 'z')
            printf(" ");
        letter++;
    }
    return (0);
}

