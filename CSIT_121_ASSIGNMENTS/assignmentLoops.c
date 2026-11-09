#include <stdio.h>

// number 1.

int main()
{
    int given = 0;

    printf("Input: ");
    scanf("%d", &given);

    printf("Output:");

    for (int x = 1; x < given; x++)
    {
        if (given % x == 0)
        {
            printf(" %d", x);
        }
    }

    return 0;
}

// number 2.
int main()
{
    int given;

    printf("Input: ");
    scanf("%d", &given);

    for (int x = 1; x <= given; x++)
    {
        printf("\nSquare no.%d\t: %d", x, x * x);
    }

    return 0;
}