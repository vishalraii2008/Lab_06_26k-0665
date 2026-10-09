#include <stdio.h>

int main()
{
    int cars[12], i, sum = 0, overloaded = 0;
    int max = 0, min = 0;
    float avg;

    printf("Enter cars waiting at 12 signals:\n");
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &cars[i]);
    }

    for (i = 0; i < 12; i++)
    {
        sum = sum + cars[i];
    }
    avg = sum / 12.0;

    for (i = 0; i < 12; i++)
    {
        if (cars[i] > avg)
            overloaded++;
        if (cars[i] > cars[max])
            max = i;
        if (cars[i] < cars[min])
            min = i;
    }

    printf("Average cars waiting: %.2f\n", avg);
    printf("Overloaded signals: %d\n", overloaded);
    printf("Highest: Signal %d (%d cars)\n", max + 1, cars[max]);
    printf("Lowest: Signal %d (%d cars)\n", min + 1, cars[min]);
    printf("Difference: %d\n", cars[max] - cars[min]);

    return 0;
}
