#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int arrayOfNumbers[10];
    int arrayCount = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);

    for (int i = 0; i < arrayCount; i++)
    {
        arrayOfNumbers[i] = rand() % 101;
        printf("%d:\t%d\n", i + 1, arrayOfNumbers[i]);
    }

    return 0;
}