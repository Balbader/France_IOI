#include <stdio.h>
#include <string.h>
#include <unistd.h>

void reverse(char *);
void to_lower(char *);
int ft_strlen(char *);

int main(void)
{
    int tot_books;
    char title[101];
    char temp[101];
    char temp2[101];

    scanf("%d\n", &tot_books);

    while (tot_books > 0)
    {
        scanf("%[^\n]\n", title);
        strcpy(temp, title);
        to_lower(title);
        strcpy(temp2, title);
        reverse(temp2);
        if (strcmp(temp2, title) == 0)
            printf("%s\n", temp);
        tot_books--;
    }
    return (0);
}

void reverse(char *str)
{
    char temp;
    int len;
    int i;

    len = ft_strlen(str);
    i = 0;
    while (i < (len / 2))
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        i++;
    }
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

void to_lower(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}
