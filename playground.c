#include <stdio.h>
#include <ctype.h>
/*
int main()
{
    int x = 10, y = 2;

    if (x > y)
    {
        printf("larger number is %d", x);
    }
    else
        printf("nigger");

    return 0;
}*/

int main()
{
    char given;
    scanf("%c", &given);
    given = toupper(given);
    printf("%c", given);
    return 0;
}