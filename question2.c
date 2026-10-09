#include <stdio.h>

int main()
{
    char pass[5][50];
    int score[5], i, j, len;
    int strongest = 0, below10 = 0;

    printf("Enter 5 passwords:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", pass[i]);
    }

    for (i = 0; i < 5; i++)
    {
        score[i] = 0;
        len = 0;

        for (j = 0; pass[i][j] != '\0'; j++)
        {
            len++;
            if (pass[i][j] >= 'a' && pass[i][j] <= 'z')
                score[i] = score[i] + 1;
            else if (pass[i][j] >= 'A' && pass[i][j] <= 'Z')
                score[i] = score[i] + 2;
            else if (pass[i][j] >= '0' && pass[i][j] <= '9')
                score[i] = score[i] + 3;

            if (pass[i][j] == '1' && pass[i][j + 1] == '2' && pass[i][j + 2] == '3')
                score[i] = score[i] - 3;
        }

        if (len >= 8)
            score[i] = score[i] + 5;

        printf("%s  Score: %d\n", pass[i], score[i]);

        if (score[i] > score[strongest])
            strongest = i;
        if (score[i] < 10)
            below10++;
    }

    printf("Strongest password: %s\n", pass[strongest]);
    printf("Passwords below 10: %d\n", below10);

    return 0;
}
