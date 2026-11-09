#include <stdio.h>

int main()
{
    int arr[10] = {
        5,
        8,
        1,
        4,
        9,
        3,
        7,
        10,
        2,
        6};
    int arrCount = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int z = 0; z < 10; z++)
    {
        printf("%d:\t%d\n", z + 1, arr[z]);
    }

    printf("\n");

    for (int x = 0; x < arrCount; x++)
    {
        if (arr[x] > arr[x + 1] && x != arrCount - 1)
        {
            count = arr[x];
            arr[x] = arr[x + 1];
            arr[x + 1] = count;
            count = 0;
            x = -1;
            continue;
        }
    }

    printf("----------------------\n\n");

    for (int z = 0; z < 10; z++)
    {
        printf("%d:\t%d\n", z + 1, arr[z]);
    }

    return 0;
}