#include <stdio.h>
#include <string.h>

#define MAX 10

void addItem(char list[][30], int *count)
{
    if (*count >= MAX)
    {
        printf("List is full!\n");
        return;
    }

    printf("Enter item: ");
    scanf("%29s", list[*count]);

    (*count)++;
}

void removeItem(char list[][30], int *count)
{
    int index;

    if (*count == 0)
    {
        printf("Nothing to remove.\n");
        return;
    }

    printf("Enter number to remove: ");
    scanf("%d", &index);

    if (index < 1 || index > *count)
    {
        printf("Invalid number.\n");
        return;
    }

    index--;

    for (int i = index; i < *count - 1; i++)
    {
        strcpy(list[i], list[i + 1]);
    }

    (*count)--;
}

void showItems(char list[][30], int count)
{
    if (count == 0)
    {
        printf("List is empty.\n");
        return;
    }

    printf("\n--- LIST ---\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, list[i]);
    }
}

int main()
{
    char list[MAX][30];
    int count = 0;
    int choice;

    while (1)
    { // gi 1 rana para balik2 ang loop infin
        printf("\n1. Add\n");
        printf("2. Remove\n");
        printf("3. Show\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addItem(list, &count);
            break;
        case 2:
            removeItem(list, &count);
            break;
        case 3:
            showItems(list, count);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
}