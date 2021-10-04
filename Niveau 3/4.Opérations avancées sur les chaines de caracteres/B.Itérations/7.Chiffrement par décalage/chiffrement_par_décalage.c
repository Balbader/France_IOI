#include <stdio.h>
#include <string.h>

void    cesar(char *str, int shift);

int     main(void)
{
    char    alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
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
            c = str[i] - 'a';
            c += shift;
            c %= 26;
            str[i] = c + 'a';
        }
        i++;
    }
    printf("%s\n", str);
}
