#include <stdio.h>

int     main(void)
{
    int     cash;
    int     price;
    int     full_price;
    int     books;

    scanf("%d%d", &cash, &price);
    books = 0;
    full_price = price;
    while (full_price <= cash)
    {
        full_price += price;
        books++;
    }
    printf("%d\n", books);
    return (0);
}
