#include <stdio.h>

int main()
{
    int given = 0, count = 0, x = 0;

    while (1)
    {
        printf("\nInput: ");
        scanf("%d", &given);
        if (given >= 0)
        {
            count += given;
            given = 0;
            x++;
            printf("%d, %d", count, x);
            continue;
        }
        else
        {
            break;
        }
    }

    printf("Total: %d", count / x);

    return 0;
}