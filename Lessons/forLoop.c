#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char givenString[20];
    int count = 0;

    scanf("%19s", givenString);
    printf("i will print this word \"%s\" 5 times\n", givenString);

    do
    {
        printf("%s\n", givenString);
        count++;
    } while (count < 5);

    return 0;
}