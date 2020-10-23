#include <stdio.h>
#include <math.h>

int     main(void)
{
    float   tax;
    float   new_tax;
    float   price;
    float   reg_price;
    float   new_price;

    scanf("%f%f%f", &tax, &new_tax, &price);
    reg_price = (price * 100) / (100 + tax);
    printf("reg_price: %f\n", reg_price);
    new_price = ((reg_price / 100) * new_tax) + reg_price;
    printf("new_price: %f\n", new_price);
    return (0);
}
