#include <stdio.h>
#include <string.h>
#include <ctype.h>

int uppercaseCheck(char given[25])
{
    for (int check = 0; given[check] != '\0'; check++)
    {
        if (isupper(given[check]) != 0)
        {
            return 1;
        }
    }

    return 0;
}

int passwordChecker(char givenPass[25])
{
    size_t passLength = strlen(givenPass);
    if (passLength <= 20)
    {
        if (uppercaseCheck(givenPass))
        {
            if (strchr("!@#$", givenPass) != NULL)
            {
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    char password[25];
    int checker = 0;

    printf("Enter password: ");
    scanf("%s", password);

    if (checker = passwordChecker(password))
    {
        printf("good pass");
    }
    else
    {
        printf("shit pass");
    }
    return 0;
}