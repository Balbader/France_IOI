#include <stdio.h>

int main(void)
{
    int arr[26];
    char name[51];
    int age;
    int i;
    int j;
    int x;

    i = 0;
    j = 'A';
    x = 0;
    scanf("%[^\n]\n", name);
    scanf("%d", &age);
    while (name[i])
    {
        if (name[0] == arr[i])
        {
            printf("%d\n", arr[i]);
            i++;
        }
        else
            i++;
    }
    return (0);
}
