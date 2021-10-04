#include <stdio.h>
#include <string.h>

void    cesar(char *str, int shift);

int     main(void)
{
    char    str[1001];
    char    temp[1001][1001];
    int     tot_pages;
    int     i;
    int     pages;


    scanf("%d\n", &tot_pages);

    i = 0;
    while (i < tot_pages - 1 )
    {
        scanf("%[^\n]\n", str);
        strcpy(temp[i], str);
        i++;
    }

    i = 0;
    pages = i + 2;
    while (i < tot_pages - 1)
    {
        if (pages % 2 == 0)
        {
            pages *= 3;
            pages *= -1;
            cesar(temp[i], pages);
        }
        else
        {
            pages *= -5;
            pages *= -1;
            cesar(temp[i], pages);
        }
        i++;
        pages = i + 2;
    }
    return (0);
}

void    cesar(char *str, int shift)
{
    char    c;
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ((str[i] >= 'A' && str[i] <= 'Z')
                    || (str[i] >= 'a' && str[i] <= 'z')))
        {
            str[i] = str[i];
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c = str[i] - 'A';
            c += shift;
            while (c < 0)
                c += 26;
            while (c > 25)
                c -= 26;
            str[i] = c + 'A';
        }

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

