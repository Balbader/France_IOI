#include <stdio.h>

void ft_check_equal(char *s1, char *s2);
void ft_check_error(char *s1, char *s2);
void ft_strcmp(char *s1, char *s2);

int main(void)
{
    char str1[53];
    char str2[53];
    int pos;
    int i;
    int j;

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

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     main(void)
{
    char    player_1[53];
    char    player_2[53];
    int     count;
    int     i;
    int     j;

    i = 0;
    j = 0;
    count = 0;

    scanf("%s\n", player_1);
    scanf("%s", player_2);

    while (player_1[i] && player_2[i] && player_1[i] == player_2[i])
    {
        count++;
        i++;
        j++;
    }
    if (player_1[i] == player_2[i])
    {
        printf("=\n");
        printf("%d\n", count);
        return (0);
    }
    if (player_1[i] == '\0')
    {
        printf("%d\n", 2);
        printf("%d\n", count);
        return (0);
    }

    if (player_2[j] == '\0' )
    {
        printf("%d\n", 1);
        printf("%d\n", count);
        return (0);
    }

    if (player_1[i] < player_2[i])
    {
        printf("%d\n", 1);
        printf("%d\n", count);
        return (0);
    }

    if (player_1[i] > player_2[i])
    {
        printf("%d\n", 2);
        printf("%d\n", count);
        return (0);
    }
    return (0);
}
*/

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     main(void)
{
    char    player_1[53];
    char    player_2[53];
    int     count;

    count = 0;

    scanf("%s\n", player_1);
    scanf("%s", player_2);

    while (count < strlen(player_1) && count < strlen(player_2)
            && player_1[count] == player_2[count])
    {
        count++;
    }
    if (count == strlen(player_1) && count == strlen(player_2))
    {
        printf("=\n");
    }
    else if (count == strlen(player_2)
            || (count < strlen(player_1) && player_1[count] < player_2[count]))
    {
        printf("1\n");
    }
    else
    {
        printf("2\n");
    }
    printf("%d\n", count);
    return (0);
}
*/