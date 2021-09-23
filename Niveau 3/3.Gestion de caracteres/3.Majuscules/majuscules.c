#include <stdio.h>

void to_upper(char *str);

int main(void)
{
    char str[10001];

    scanf("%[^\n]", str);
    to_upper(str);
    return (0);
}

void to_upper(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    printf("%s\n", str);
}

/*
#include <stdio.h>


int     main(void)
{
    char    str[10001];
    int     i;

    scanf("%[^\n]", str);

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i]);
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 'a';
            str[i] += 'A';
            printf("%c", str[i]);
        }
        else
            printf("%c", str[i]);
        i++;
    }
    return (0);
}
*/
