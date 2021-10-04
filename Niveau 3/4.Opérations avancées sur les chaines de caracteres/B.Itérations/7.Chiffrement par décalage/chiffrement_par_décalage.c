#include <stdio.h>
#include <string.h>

void    cesar(char *str, int shift);

int     main(void)
{
    char    str[1001] = "ikio kyz rg ykiutjk vgmk ja robxk";
    char    temp[1001];

    strcpy(temp, str);

    printf("%s\n", str);
    cesar(temp, -6);
    return (0);
}

void    cesar(char *str, int shift)
{
    char    c;
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            c = str[i] - 'a'; // 0 <= c < 26 i.e. initial position
            c += shift;       // any value possible (no limits on `shift`) --> new position
            while (c < 0)
                c += 26;      // no longer negative --> prevent overflow
            while (c > 25)
                c -= 26;      // no longer 26+ --> prevent underflow
            str[i] = c + 'a'; // new character
        }
        i++;
    }
    printf("%s\n", str);
}

