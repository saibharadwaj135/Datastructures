#include <stdio.h>

void tower(int n, char S, char D, char Aux)
{
    if (n == 1)
    {
        printf("move disc %d from %c to %c\n", n, S, D);
        return;
    }
    tower(n - 1, S, Aux, D);
    printf("move disk %d from %c to %c \n", n, S, D);
    tower(n - 1, Aux, D, S);
}

int main()
{
    int disc;
    scanf("%d", &disc);
    char A, B, C;

    printf("enter the number of disks: ");
    scanf("%d", &disc);
    tower(disc, 'A', 'C', 'B');
    printf("enter the number of disks: ");
}