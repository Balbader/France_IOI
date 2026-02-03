#include <stdio.h>

int     main(void)
{
    int     team_count;
    int     t1;
    int     tot_t1;
    int     t2;
    int     tot_t2;

    scanf("%d", &team_count);
    tot_t1 = 0;
    tot_t2 = 0;
    while (team_count >= 1)
    {
        scanf("%d", &t1);
        scanf("%d", &t2);
        tot_t1 += t1;
        tot_t2 += t2;
        team_count--;
    }
    if (tot_t1 > tot_t2)
    {
        printf("L'équipe 1 a un avantage\n");
        printf("Poids total pour l'équipe 1 : %d\n", tot_t1);
        printf("Poids total pour l'équipe 2 : %d\n", tot_t2);
    }
    if (tot_t1 < tot_t2)
    {
        printf("L'équipe 2 a un avantage\n");
        printf("Poids total pour l'équipe 1 : %d\n", tot_t1);
        printf("Poids total pour l'équipe 2 : %d\n", tot_t2);
    }
    return (0);
}
