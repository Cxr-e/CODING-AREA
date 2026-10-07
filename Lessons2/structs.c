#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float salary;
} emp;

int sendTest(char naming[])
{
    char userGiven[50];
    fgets(userGiven, sizeof(userGiven), stdin);
    strcpy(naming, userGiven);
    return 0;
}

int main()
{
    emp employee1 = {"mai brodi", 26, 10000.00};
    emp new;

    printf("%s\n", employee1.name);
    printf("give employee new name: ");
    fgets(new.name, sizeof(new.name), stdin);
    printf("%s", new.name);

    sendTest(new.name);
    printf("%s", new.name);
    return 0;
}