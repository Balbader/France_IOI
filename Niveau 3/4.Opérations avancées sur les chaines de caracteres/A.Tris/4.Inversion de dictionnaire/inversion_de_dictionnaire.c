#include <stdio.h>
#include <string.h>

int     main(void)
{
    int     nbr_words;
    char    word_1[51];
    char    word_2[51];
    char    temp_word_1[1000][51];
    char    temp_word_2[1000][51];
    int     i;

    scanf("%d\n", &nbr_words);

    i = 0;
    while (i < nbr_words)
    {
        scanf("%s ", word_1);
        strcpy(temp_word_1[i], word_1);
        scanf("%s\n", word_2);
        strcpy(temp_word_2[i], word_2);
        i++;
    }

    while (i > 0)
    {
        printf("%s %s\n", temp_word_2[i], temp_word_1[i]);
        i--;
    }
    return (0);
}
