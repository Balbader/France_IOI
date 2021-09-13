#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(void)
{
    int books;
    int min_length;
    char title[1001];
    char summary[1001];
    int i;

    scanf("%d%d\n", &books, &min_length);
    for (i = 1; i <= books; i++)
    {
        scanf("%[^\n]\n", title);
        scanf("%[^\n]\n", summary);
        if (ft_strlen(summary) < min_length)
            printf("%s\n", title);
    }
    return (0);
}

/*
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(void)
{
    int tot_books;
    int min_length;
    char title[1001];
    char synopsis[1001];

    scanf("%d", &tot_books);
    scanf("%d\n", &min_length);

    while (tot_books > 0)
    {
        scanf("%[^\n]\n", title);
        scanf("%[^\n]\n", synopsis);
        if (ft_strlen(synopsis) < min_length)
        {
            printf("%s\n", title);
        }
        tot_books--;
    }
    return (0);
}
*/