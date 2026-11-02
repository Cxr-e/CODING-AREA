#include <stdio.h>

int main()
{
    int count = 1, given, calc = 0, evenCount = 0;

    scanf("%d", &given);

    for (int x = 0; x < given; x++)
    {
        if (calc % 2 == 0)
        {
            evenCount++;
        }
        calc += count;
        count++;
    }

    printf("%d, %d", calc, evenCount);

    return 0;
}