#include <stdio.h>

int     main(void)
{
    int     list_price[10] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
    int     i;
    int     amount;
    int     tot_price;
    
    i = 0;
    tot_price = 0;
    while (i <= *list_price)
    {
        scanf("%d", &amount);
        tot_price += (amount * list_price[i]);
        i++;
    }
    printf("%d\n", tot_price);
    return (0);
}
