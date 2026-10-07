#include <stdio.h>
#include <ctype.h>

int main()
{
    char empID[15], empName[30], cs;
    float salary, wtax;

    printf("Employee I.D.: ");
    fgets(empID, 14, stdin);
    printf("Employee Name: ");
    fgets(empName, 29, stdin);
    printf("Civil Status <SsMmHh>: ");
    scanf(" %c", &cs);
    printf("Monthly Salary: Php");
    scanf(" %f", &salary);

    cs = tolower(cs);

    switch (cs)
    {
    case 's':
        wtax = salary * 0.15;
        break;
    case 'm':
        wtax = salary * 0.7;
        break;
    case 'h':
        wtax = salary * 0.12;
        break;
    default:
        printf("\nInvalid civil status Code. Please try again");
        return 0;
    }

    printf("\nWithholding Tax: Php%.2f", wtax);

    return 0;
}