#include <stdio.h>

int main()
{
    int stock[10], minimum[10], i;
    int order, total = 0, largest = 0, largestProduct = 0;

    printf("Enter stock of 10 products:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &stock[i]);
    }

    printf("Enter minimum quantity of 10 products:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &minimum[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (stock[i] < minimum[i])
        {
            order = minimum[i] - stock[i];
            printf("Product %d needs reorder of %d\n", i + 1, order);
            total = total + order;

            if (order > largest)
            {
                largest = order;
                largestProduct = i + 1;
            }
        }
    }

    if (total == 0)
    {
        printf("No product needs reordering\n");
    }
    else
    {
        printf("Largest reorder: Product %d (%d units)\n", largestProduct, largest);
        printf("Total reorder quantity: %d\n", total);
    }

    return 0;
}
