#include <stdio.h>

int main()
{
    int seat[15], i, booked = 0, empty = 0;
    int first = 0, last = 0, count = 0;

    printf("Enter 15 seats (0 = empty, 1 = booked):\n");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &seat[i]);
    }

    for (i = 0; i < 15; i++)
    {
        if (seat[i] == 1)
        {
            booked++;
        }
        else
        {
            empty++;
            if (first == 0)
                first = i + 1;
            last = i + 1;
        }
    }

    printf("Booked seats: %d\n", booked);
    printf("Empty seats: %d\n", empty);

    if (empty == 0)
    {
        printf("No seat available\n");
    }
    else
    {
        printf("First available seat: %d\n", first);
        printf("Last available seat: %d\n", last);
    }

    for (i = 0; i < 15 && count < 3; i++)
    {
        if (seat[i] == 0)
        {
            seat[i] = 1;
            count++;
        }
    }

    printf("Final seating chart:\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", seat[i]);
    }
    printf("\n");

    return 0;
}
