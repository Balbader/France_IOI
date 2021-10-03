#include <stdio.h>

int     main(void)
{
    char    maj_alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char    min_alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    char    str[1001] = "Ikio kyz rg ykiutjk vgmk ja robxk";
    int     i;
    int     j;

    i = 0;
    while (str[i])
    {
        if (str[i] == ' ')
        {
            printf("%c", str[i]);
            i++;
        }

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            j = 0;
            while (maj_alphabet[j])
            {
                if (maj_alphabet[j] == str[i])
                    printf("%c", maj_alphabet[j] - 6);
                j++;
            }
        }

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            j = 0;
            while (min_alphabet[j])
            {
                if (min_alphabet[j] == str[i])
                    printf("%c", min_alphabet[i] - 6);
                j++;
            }
        }
        i++;
    }
    return (0);
}
