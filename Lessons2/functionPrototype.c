#include <stdio.h>
#include <string.h>

void diddle(char name[][40], int size); // defines a function prematurely

int main()
{
    char group[5][40] = {
        "one",
        "two",
        "three",
        "four",
        "five"};

    int size = sizeof(group) / sizeof(group[0]);

    diddle(group, size);

    return 0;
}

void diddle(char name[][40], int size)
{
    for (int x = 0; x < size; x++)
    {
        printf("%s\n", name[x]);
    }
}