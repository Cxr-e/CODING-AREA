#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x = 5;
    int y = 9;
    int result = 0;

    printf("%s", (result) ? "it is true\n" : "it is false\n"); // short hand if else (true or false) statement

    int evenOrOdd = 9;
    printf("%d is %s", evenOrOdd, (!(evenOrOdd % 2)) ? "Even\n" : "Odd");

    return 0;
}