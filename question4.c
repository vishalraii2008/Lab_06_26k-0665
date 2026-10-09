#include <stdio.h>

int main()
{
    int marks[15], i, sum = 0, count = 0;
    int high, low;
    float avg;

    printf("Enter marks of 15 students:\n");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 15; i++)
    {
        marks[i] = marks[i] + 5;
        if (marks[i] > 100)
            marks[i] = 100;
    }

    high = marks[0];
    low = marks[0];

    for (i = 0; i < 15; i++)
    {
        sum = sum + marks[i];
        if (marks[i] == 100)
            count++;
        if (marks[i] > high)
            high = marks[i];
        if (marks[i] < low)
            low = marks[i];
    }

    avg = sum / 15.0;

    printf("Marks after bonus:\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("\nNew average: %.2f\n", avg);
    printf("Students with 100: %d\n", count);
    printf("Range: %d\n", high - low);

    return 0;
}
