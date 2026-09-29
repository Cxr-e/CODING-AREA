#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// MOOOOOODUUUUUUUUUUUUULEEEEEEES
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// FIRST
int addingName(char givenarray[][40], int currentLine)
{
    char givenName[40];
    if (currentLine >= 10)
    {
        printf("full\n");
        return currentLine;
    }
    printf("Insert name nigga: ");
    scanf("%39s", givenName);
    strcpy(givenarray[currentLine], givenName);
    return currentLine + 1;
}

// SECOND
int removingName(char givenarray[][40], int currentLine)
{
    int count = 1;
    int choice = 0;
    if (currentLine <= 0)
    {
        printf("empty.\n");
        return currentLine;
    }

    for (int x = 0; x < currentLine; x++)
    {
        printf("%d. %s\n", count, givenarray[x]);
        count++;
    }

    printf("pick number: ");
    scanf("%d", &choice);

    if (choice > currentLine)
    {
        printf("Invalid number.");
        return currentLine;
    }

    choice--;

    for (int i = choice; i < currentLine; i++)
    {
        strcpy(givenarray[i], givenarray[i + 1]);
        choice++;
    }
    return currentLine - 1;
}

// THIRD
int toggleModule(int giveBackEither)
{
    if (giveBackEither)
    {
        printf("Turning off toggle.");
        return 0;
    }
    else
    {
        printf("Turning on toggle.");
        return 1;
    }
}

// FOURTH
void printList(char givenarray[][40], int currentLine)
{
    int count = 1;
    if (currentLine <= 0)
    {
        printf("empty nigga.\n");
        return;
    }

    for (int x = 0; x < currentLine; x++)
    {
        printf("%d. %s\n", count, givenarray[x]);
        count++;
    }

    return;
}

// FIFTH
int spin(char givenArray[][40], int toggleCheck, int currentLine)
{
    srand(time(NULL));
    int random = rand();
    if (currentLine <= 0)
    {
        printf("nothing to spin");
        return currentLine;
    }
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// MAAAAAAAAAAIIIIIIIIIIIIIIIIIIIIINNNNNNNNNNNNNNNNN

int main()
{
    char arrayOfNames[10][40];
    int size = sizeof(arrayOfNames) / sizeof(arrayOfNames[0]);
    int nextInLine = 0;
    int choice = 0;
    int isToggleDeleteBoolean = 0;

    printf("\tSpin da weel fn\n\n");

    while (1)
    {
        printf("\n\tcurrent in line: %d\n", nextInLine);
        printf("1. Add\n2. Remove\n3. Toggle deletion\n4. Current list.\n5. Spin!\n6. Exit");
        printf("\nEnter number: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            nextInLine = addingName(arrayOfNames, nextInLine);
            break;
        case 2:
            nextInLine = removingName(arrayOfNames, nextInLine);
            break;
        case 3:
            isToggleDeleteBoolean = toggleModule(isToggleDeleteBoolean);
            break;
        case 4:
            printList(arrayOfNames, nextInLine);
            break;
        case 5:
            printf("5; nuffun available rn");
            break;
        case 6:
            return 0;
        default:
            printf("invalid number");
            break;
        }
    }
    return 0;
}