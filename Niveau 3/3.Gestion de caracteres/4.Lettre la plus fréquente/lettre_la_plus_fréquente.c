#include <stdio.h>
#include <string.h>
#include <unistd.h>

void to_upper(char *);
void remove_white_space(char *);
int ft_strlen(char *);
void freq_counter(char *);

int main(void)
{
    char str[10001];
    scanf("%[^\n]", str);
    to_upper(str);
    remove_white_space(str);
    freq_counter(str);
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
}

void remove_white_space(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

void freq_counter(char *str)
{
    int freq[10001];
    int i;
    int j;
    int len;
    int count;
    int temp;
    char res;

    len = ft_strlen(str);
    i = 0;
    while (i < len)
    {
        freq[i] = -1;
        i++;
    }

    i = 0;
    while (i < len)
    {
        count = 1;
        j = i + 1;
        while (j < len)
        {
            if (str[i] == str[j])
            {
                count++;
                freq[j] = 0;
            }
            j++;
        }
        if (freq[i] != 0)
            freq[i] = count;
        i++;
    }
    i = 0;
    temp = 0;
    while (i < len)
    {
        if (freq[i] != 0)
        {
            if (freq[i] > temp)
            {
                temp = freq[i];
                res = str[i];
            }
        }
        i++;
    }
    printf("%c\n", res);
}
