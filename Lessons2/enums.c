#include <stdio.h>

enum incremental
{
    ZERO = 43,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE
};

typedef enum
{
    FIRST = 1,
    SECOND,
    THIRD
} ranking;

typedef enum
{
    SUCCESS,
    FAILURE,
    PENDING
} allocation;

void allocationStatus(allocation check);

int main()
{
    enum incremental number = ONE;
    printf("%d\n", number);

    ranking medal = FIRST;
    printf("The medal goes to %d\n\n", medal);

    allocation status = SUCCESS;
    allocationStatus(status);

    return 0;
}

void allocationStatus(allocation check)
{
    switch (check)
    {
    case SUCCESS:
        printf("Allocation successful.");
        break;
    case FAILURE:
        printf("Allocation failed.");
        break;
    case PENDING:
        printf("Allocation pending...");
        break;
    default:
        printf("Unable to read allocation status.");
        break;
    }
}