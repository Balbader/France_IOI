#include <stdio.h>

void    ft_check_equal(char *s1, char *s2);
void    ft_check_error(char *s1, char *s2);
void    ft_strcmp(char *s1, char *s2);

int     main(void)
{
    char    str1[53];
    char    str2[53];
    int     pos;
    int     i;
    int     j;

    i = 0;
    j = 0;
    pos = 0;
    scanf("%[^\n]\n", str1);
    scanf("%[^\n]", str2);
    while (str1[i] && str2[j] && str1[i] == str2[j])
    {
        i++;
        j++;
        pos++;
    }
    if (str1[i] == str2[j])
    {
        printf("=\n");
        printf("%d\n", pos);
        return (0);
    }
    if (str1[i] < 'A' || str1[i] > 'M')
    {
        printf("2\n");
        printf("%d\n", pos);
        return (0);
    }
    if (str2[j] < 'A' || str2[j] > 'M')
    {
        printf("1\n");
        printf("%d\n", pos);
        return (0);
    }
    if (str1[i] < str2[j])
    {
        printf("1\n");
        printf("%d\n", pos);
        return (0);
    }
    if (str2[j] < str1[i])
    {
        printf("2\n");
        printf("%d\n", pos);
        return (0);
    }
    return (0);
}
