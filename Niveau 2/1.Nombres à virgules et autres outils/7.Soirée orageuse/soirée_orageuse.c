#include <stdio.h>
#include <math.h>

int     main(void)
{
    float   sec;
    
    scanf("%f", &sec);
    printf("%f\n", round((sec * 340.29) / 1000));
    return (0);
}
