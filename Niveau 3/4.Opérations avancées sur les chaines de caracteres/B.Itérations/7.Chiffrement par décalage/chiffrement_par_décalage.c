#include <stdio.h>
#include <string.h>

void    cesar(char *str, int shift);

int     main(void)
{
    char    str[1001];
    char    temp[1001][1001];
    int     tot_pages;
    int     shift;
    int     i;
    int     pages;


    scanf("%d\n", &tot_pages);

    i = 0;
    while (i < tot_pages - 1 )
    {
        scanf("%[^\n]\n", str);
        strcpy(temp[i], str);
        memset(str, 0, sizeof(str));
        i++;
    }

    i = 0;
    pages = i + 2;
    while (i < tot_pages - 1)
    {
        // check si pages est pair
        if (pages % 2 == 0)
        {
            shift = -3 * pages;
            cesar(temp[i], shift);
        }
        // check si pages est impair
        else
        {
            shift = 5 * pages;
            cesar(temp[i], shift);
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

