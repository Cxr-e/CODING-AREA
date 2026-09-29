#include <stdio.h>
#include <string.h>
#include <ctype.h>

int arrAddition(int givenArr[], int size, int selectedNum)
{
    size += 1;
    givenArr[size - 1] = selectedNum;
    return size;
}

int arrCheck(int givenArr[], int size, int selectedNum)
{
    if (size < 2)
    {
        printf("\nError - either just one in array or no other elem in arr");
        return size;
    }
    else if (selectedNum > size)
    {
        printf("\nError - num to del exceeds the size by %d", selectedNum - size);
        return size;
    }
    printf("\nthere is %d elements and we are about to delete the number %d in the array.", size, selectedNum);
    for (int x = selectedNum - 1; x < size - 1; x++)
    { // na bali ang > ug <
        givenArr[x] = givenArr[x + 1];
    }
    // wrong (size--); kay gi minus ra ang naa sa local
    return size - 1; // corrected
}

int main()
{
    int tesList[5] = {10, 20, 30, 40, 50};
    int size = sizeof(tesList) / sizeof(tesList[0]);

    int numToDel;

    for (int z = 0; z < size; z++)
    {
        printf("%d - %d\n", tesList[z], z + 1);
    }
    printf("\nPick a number to delete the memory: ");
    scanf("%d", &numToDel);

    //  arrCheck(tesList, size, numToDel);
    //  this is wrong ^^^ because the return has no where to go to

    size = arrCheck(tesList, size, numToDel); // this is correct because the return has somewhere to go to

    for (int y = 0; y < size; y++)
    {
        printf("\n%d", tesList[y]);
    }

    printf("\nGive a number to add to the memory: ");
    scanf("%d", &numToDel);

    size = arrAddition(tesList, size, numToDel);

    for (int y = 0; y < size; y++)
    {
        printf("\n%d", tesList[y]);
    }
    return 0;
}