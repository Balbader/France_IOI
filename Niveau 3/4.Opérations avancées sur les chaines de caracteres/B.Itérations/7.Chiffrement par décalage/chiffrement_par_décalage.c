#include <stdio.h>
#include <string.h>

int     main(void)
{
    char    alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    char    str[1001] = "ikio kyz rg ykiutjk vgmk ja robxk";
    char    temp[1001];
    int     res;
    int     i;
    int     j;

    strcpy(temp, str);

    res = 0;
    i = 0;
    while (str[i] && temp[i])
    {
        j = 0;
        while (alphabet[j])
        {
            if (alphabet[j] == str[i])
            {
                temp[i] = alphabet[j - 6];
            }
            j++;
        }
        i++;
    }
    printf("str : %s\n", str);
    printf("temp: %s\n", temp);
    return (0);
}
