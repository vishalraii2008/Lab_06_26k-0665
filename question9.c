#include <stdio.h>

int main()
{
    int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
    int i, flagged = 0, normal = 0, sum = 0;
    int largest = transfers[0];

    for (i = 0; i < 10; i++)
    {
        if (transfers[i] < 100)
        {
            printf("%d - Flagged (too small)\n", transfers[i]);
            flagged++;
        }
        else if (transfers[i] > 200000)
        {
            printf("%d - Flagged (too large)\n", transfers[i]);
            flagged++;
        }
        else
        {
            printf("%d - Normal\n", transfers[i]);
            sum = sum + transfers[i];
            normal++;
        }

        if (transfers[i] > largest)
            largest = transfers[i];
    }

    printf("Total flagged transfers: %d\n", flagged);
    if (normal > 0)
        printf("Average of normal transfers: %.2f\n", (float)sum / normal);
    printf("Largest transfer: %d\n", largest);

    return 0;
}
