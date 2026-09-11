#include <stdio.h>

int main()
{
    int score;
    int sum = 0;

    do
    {
        printf("Enter score: ");
        scanf("%d", &score);

        if (score != -1)
        {
            sum = sum + score;
        }

    } while (score != -1);

    printf("Sum = %d\n", sum);
    return 0;
}