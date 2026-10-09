#include <stdio.h>

int main()
{
    int original, temp, reversed = 0;

    printf("Enter reference number: ");
    scanf("%d", &original);

    temp = original;
    while (temp > 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp = temp / 10;
    }

    printf("Reversed: %d\n", reversed);

    if (original == reversed)
        printf("Palindrome Confirmed\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
