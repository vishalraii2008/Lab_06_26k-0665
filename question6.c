#include <stdio.h>

int main()
{
    int gen[10], i;

    printf("Enter first population: ");
    scanf("%d", &gen[0]);
    printf("Enter second population: ");
    scanf("%d", &gen[1]);

    for (i = 2; i < 10; i++)
    {
        gen[i] = gen[i - 1] + gen[i - 2];
    }

    for (i = 0; i < 10; i++)
    {
        printf("Generation %d = %d\n", i + 1, gen[i]);
    }

    return 0;
}
