#include <stdio.h>

void ft_check_code(int);

int main(void)
{
    int code;

    printf("Entrez le code :\n");
    scanf("%d", &code);
    ft_check_code(code);
    return (0);
}

void ft_check_code(int code)
{
    while (code != 4242)
    {
        printf("Entrez le code :\n");
        scanf("%d", &code);
    }
    if (code == 4242)
    {
        printf("Premier code bon.\n");
        printf("Entrez le code :\n");
        scanf("%d", &code);
        while (code != 2121)
        {
            printf("Entrez le code :\n");
            scanf("%d", &code);
        }
        if (code == 2121)
            printf("Bravo.\n");
    }
}

/*
#include <stdio.h>
void attendreCode(int codeSecret)
{
   int tentative;
   do
   {
      printf("Entrez le code :\n");
      scanf("%d", &tentative);
   }
   while (tentative != codeSecret);
}
int main()
{
   attendreCode(4242);
   printf("Premier code bon.\n");
   attendreCode(2121);
   printf("Bravo.\n");
}
*/