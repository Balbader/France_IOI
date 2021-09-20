#include <stdio.h>

int ft_next_term(int);

int main(void)
{
    int term;
    int next;

    scanf("%d", &term);
    next = ft_next_term(term);
    while (next != 1)
    {
        printf("%d ", next);
        term = next;
        next = ft_next_term(term);
    }
    if (next == 1)
        printf("%d\n", next);
    return (0);
}

int ft_next_term(int x)
{
    int next;
    if (x % 2 == 0)
        next = x / 2;
    else
        next = (x * 3) + 1;
    return (next);
}

/*
#include <stdio.h>

void   check_nbr(int nbr)
{
    while (nbr != 1)
    {
        if (nbr % 2 == 0)
        {
            nbr /= 2;
        }
        else
        {
            nbr = (nbr * 3) + 1;
        }
        printf("%d ", nbr);
    }
}

int     main(void)
{
    int nbr;

    scanf("%d", &nbr);

    check_nbr(nbr);
    return (0);
}
*/
