#include <stdio.h>

int main(void)
{
    int age;
    int weight;
    int price;

    scanf("%d %d", &age, &weight);
    if (age == 60)
    {
        price = 0;
    }
    else if (age < 10)
    {
        price = 5;
    }
    else if (age >= 10 && age <= 59 && weight >= 20 || age > 60 && weight >= 20)
    {
        price = 40;
    }
    else
    {
        price = 30;
    }
    printf("%d\n", price);
    return (0);
}
