#include <stdio.h>

int main(void)
{
    int ageCadet;
    int ageAine;
    int difference;

    scanf("%d", &ageCadet);
    scanf("%d", &ageAine);
    difference = ageAine - ageCadet;
    printf("%d\n", difference);
    return (0);
}
