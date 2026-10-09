#include <stdio.h>

int main()
{
    int amount, count = 0, total = 0;

    printf("Enter amount to withdraw (0 to exit): ");
    scanf("%d", &amount);

    while (amount != 0)
    {
        count++;
        total = total + amount;
        printf("Withdrawal of %d processed\n", amount);

        printf("Enter amount to withdraw (0 to exit): ");
        scanf("%d", &amount);
    }

    printf("Session ended\n");
    printf("Total transactions: %d\n", count);
    printf("Total amount withdrawn: %d\n", total);

    return 0;
}
