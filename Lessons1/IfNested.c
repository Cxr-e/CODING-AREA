#include <stdio.h>

int isEvenNumber(int number)
{
    return number % 2 == 0; // little helper
}

int checkFN(int number1, int number2)
{
    if (number1 > number2)
    {
        if (isEvenNumber(number1))
        {
            return 3; // first number is greater than second and is even
        }
        else
        {
            return 2; // first number is greater than second and is odd
        }
    }
    else
    {
        if (isEvenNumber(number1))
        {
            return 1; // first number is lesser than second and is even
        }
        else
        {
            return 0; // first number is lesser than second and is odd
        }
    }
}

void main()
{
    // variables

    int givenNumber1, givenNumber2;
    int result;

    // input

    printf("wazzah mai brodi, gimmie numbah finna check if its above this numbah and odd or even: ");
    scanf("%d %d", &givenNumber1, &givenNumber2);

    // process

    result = checkFN(givenNumber1, givenNumber2);

    // statement and output

    if (result == 3)
    {
        printf("the first number %d is greater than the second number %d and the first number is even.", givenNumber1, givenNumber2);
    }
    else if (result == 2)
    {
        printf("the first number %d is greater than the second number %d and the first number is odd", givenNumber1, givenNumber2);
    }
    else if (result == 1)
    {
        printf("the first number %d is lesser than the second number %d and the first number is even", givenNumber1, givenNumber2);
    }
    else
    {
        printf("the first number %d is lesser than the second number %d and the first number is odd", givenNumber1, givenNumber2);
    }
}