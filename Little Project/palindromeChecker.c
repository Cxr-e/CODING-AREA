#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int palindromeChecker(char userGiven[40])
{
    int size = strlen(userGiven);
    char translated[size];
    int z = 0;

    for (int x = size - 1; x >= 0; x--)
    {
        printf("%d - %c\n", z, userGiven[x]);
        translated[z] = userGiven[x];
        translated[z] = toupper(translated[z]);
        z++;
    }

    printf("%s - ", translated);

    for (int y = 0; y < size; y++)
    {
        userGiven[y] = toupper(userGiven[y]);
    }

    printf("%s\n", userGiven);

    if (strstr(translated, userGiven))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char given[40];
    int size;
    char translated[size + 1];
    int z = 0;

    scanf("%39s", given);

    size = strlen(given);

    printf("%d characters in %s\nz = %d\n\n", size, given, z);

    if (palindromeChecker(given))
    {
        printf("Palindrome!!!");
    }
    else
    {
        printf("no palindrome :(");
    }

    return 0;
}
