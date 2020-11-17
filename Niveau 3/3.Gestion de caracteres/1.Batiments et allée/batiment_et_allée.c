#include <stdio.h>

int main(void)
{
    char alphabet[26];
    char name[51];
    int age;

    scanf("%[^\n]\n", name);
    scanf("%d", &age);
    printf("%s\n", name);
    printf("%d\n", age);
    return (0);
}
