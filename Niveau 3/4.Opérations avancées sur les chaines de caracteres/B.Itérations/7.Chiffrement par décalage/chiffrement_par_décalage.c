#include <stdio.h>
#include <string.h>

int     main(void)
{
    char    maj_alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char    min_alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    char    str[1001] = "ikio kyz rg ykiutjk vgmk ja robxk";
    char    temp[1001];
    int     len_min;
    int     len_maj;
    int     res;
    int     i;
    int     j;

    strcpy(temp, str);

    len_maj = strlen(maj_alphabet);
    len_min = strlen(min_alphabet);
    printf("len_min: %d\n", len_min);
    res = 0;
    i = 0;
    while (str[i] && temp[i])
    {
        j = 0;
        while (min_alphabet[j])
        {
            if (min_alphabet[j] == str[i])
            {
                printf("letter before: %c\n", temp[i]);
                res = (((j % len_min) + len_min) % len_min);
                printf("res: %d\n", res);
                temp[i] = min_alphabet[res];
                printf("letter before: %c\n", temp[res]);
                printf("\n");
            }
            j++;
        }
        i++;
    }
    printf("str : %s\n", str);
    printf("temp: %s\n", temp);
    return (0);
}
