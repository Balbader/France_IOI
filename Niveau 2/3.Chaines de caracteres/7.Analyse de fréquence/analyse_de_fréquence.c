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
    int lines;
    int words;
    int length;
    int arr[101] = {0};
    char str[101] = {0};
    int i;
    int j;

    scanf("%d %d", &lines, &words);
    i = 0;
    while (i < lines)
    {
        j = 0;
        while (j < words)
        {
            scanf("%s", str);
            length = ft_strlen(str);
            arr[length]++;
            j++;
        }
        i++;
    }
    for (i = 0; i <= 100; i++)
    {
        if (arr[i] > 0)
            printf("%d : %d\n", i, arr[i]);
    }
    return (0);
}

/*
#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        i++;
    }

    return (i);
}

int main(void)
{
    int     tot_lines;
    int     tot_words;
    int     count;
    int     i;
    int     j;
    char    str[1001];
    char    arr[1001];

    count = 0;
    i = 0;

    scanf("%d", &tot_lines);
    scanf("%d\n", &tot_words);

    while (i < tot_lines)
    {
        j = 0;
        while (j < tot_words)
        {
            scanf("%s", str);
            count = ft_strlen(str);
            arr[count] += 1;
            j++;

        }
        i++;
    }

    i = 0;
    while (i < 101)
    {
        if (arr[i] > 0)
        {
            printf("%d : %d\n", i , arr[i]);
        }
        i++;
    }

    return (0);
}
*/
