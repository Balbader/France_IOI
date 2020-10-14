#include <stdio.h>

int     main(void)
{
    int     age;
    int     wgt;
    int     price;

    scanf("%d%d", &age, &wgt);
    price = 30;
    if (((age >= 10 && age < 60) || age > 60) && wgt < 20)
        printf("%d\n", price);
    if (((age >= 10 && age < 60) || age > 60) && wgt >= 20)
    {
        price = 40;
        printf("%d\n", price);
    }
    if (age == 60)
    {
        price = 0;
        printf("%d\n", price);
    }
    if (age < 10)
    {
        price = 5;
        printf("%d\n", price);
    }
    return (0);
}


