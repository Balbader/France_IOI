#include <stdio.h>

void check_name(char *str);
void check_age(int nb);

int main(void)
{
    char name[51];
    int age;

    scanf("%[^\n]\n", name);
    scanf("%d", &age);

    check_name(name);
    check_age(age);
    return (0);
}

void check_name(char *name)
{
    int i;

    i = 0;
    if (name[i] == 'A')
        printf("%d", 1);
    else if (name[i] == 'B')
        printf("%d", 2);
    else if (name[i] == 'C')
        printf("%d", 3);
    else if (name[i] == 'D')
        printf("%d", 4);
    else if (name[i] == 'E')
        printf("%d", 5);
    else if (name[i] == 'F')
        printf("%d", 6);
    else if (name[i] == 'G')
        printf("%d", 7);
    else if (name[i] == 'H')
        printf("%d", 8);
    else if (name[i] == 'I')
        printf("%d", 9);
    else if (name[i] == 'J')
        printf("%d", 10);
    else if (name[i] == 'K')
        printf("%d", 11);
    else if (name[i] == 'L')
        printf("%d", 12);
    else if (name[i] == 'M')
        printf("%d", 13);
    else if (name[i] == 'N')
        printf("%d", 14);
    else if (name[i] == 'O')
        printf("%d", 15);
    else if (name[i] == 'p')
        printf("%d", 16);
    else if (name[i] == 'Q')
        printf("%d", 17);
    else if (name[i] == 'R')
        printf("%d", 18);
    else if (name[i] == 'S')
        printf("%d", 19);
    else if (name[i] == 'T')
        printf("%d", 20);
    else if (name[i] == 'U')
        printf("%d", 21);
    else if (name[i] == 'V')
        printf("%d", 22);
    else if (name[i] == 'W')
        printf("%d", 23);
    else if (name[i] == 'X')
        printf("%d", 24);
    else if (name[i] == 'Y')
        printf("%d ", 25);
    else if (name[i] == 'Z')
        printf("%d", 26);
}

void check_age(int age)
{
    if (age == 1)
        printf("A\n");
    else if (age == 2)
        printf("B\n");
    else if (age == 3)
        printf("C\n");
    else if (age == 4)
        printf("D\n");
    else if (age == 5)
        printf("E\n");
    else if (age == 6)
        printf("F\n");
    else if (age == 7)
        printf("G\n");
    else if (age == 8)
        printf("H\n");
    else if (age == 9)
        printf("I\n");
    else if (age == 10)
        printf("J\n");
    else if (age == 11)
        printf("K\n");
    else if (age == 12)
        printf("L\n");
    else if (age == 13)
        printf("M\n");
    else if (age == 14)
        printf("N\n");
    else if (age == 15)
        printf("O\n");
    else if (age == 16)
        printf("P\n");
    else if (age == 17)
        printf("Q\n");
    else if (age == 18)
        printf("R\n");
    else if (age == 19)
        printf("S\n");
    else if (age == 20)
        printf("T\n");
    else if (age == 21)
        printf("U\n");
    else if (age == 22)
        printf("V\n");
    else if (age == 23)
        printf("W\n");
    else if (age == 24)
        printf("X\n");
    else if (age == 25)
        printf("Y\n");
    else if (age == 26)
        printf("Z\n");
}
