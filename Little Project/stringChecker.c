#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int uppercaseCheck(char *givenPass)
{
    for (int n = 0; givenPass[n] != '\0'; n++)
    {
        if (isupper(givenPass[n]))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char password[20];

    printf("Butang password dri: ");
    scanf("%19s", password);

    if (uppercaseCheck(password))
    {
        printf("waw");
    }
    else
    {
        printf("naw");
    }

    return 0;
}
