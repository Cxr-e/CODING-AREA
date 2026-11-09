#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int arrayOfNumbers[15];
    int arrayCount = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);

    int middleMan, manOne, manTwo, counter = 0;

    for (int i = 0; i < arrayCount; i++)
    {
        arrayOfNumbers[i] = rand() % 101;
        printf("%d:\t%d\n", i + 1, arrayOfNumbers[i]);
    }

    printf("\n");

    for (int x = 0; x < arrayCount * 2; x++)
    {
        do
        {
            manOne = rand() % arrayCount;
            manTwo = rand() % arrayCount;

            if (manOne != manTwo)
            {
                middleMan = arrayOfNumbers[manOne];
                arrayOfNumbers[manOne] = arrayOfNumbers[manTwo];
                arrayOfNumbers[manTwo] = middleMan;

                middleMan = 0;
                counter = 0;
            }
            else
            {
                counter = 1;
            }

        } while (counter == 1);
    }

    for (int z = 0; z < arrayCount; z++)
    {
        // printf("%d:\t%d\n", z + 1, arrayOfNumbers[z]);
        printf("%d, ", arrayOfNumbers[z]);
    }

    return 0;
}