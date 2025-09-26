#include <stdio.h>

int main()
{
    float num1, num2;
    char opraters;

    printf("Enter operators (+,-,*,/): ");
    scanf(" %c", &opraters);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (opraters)
    {
    case '+':
        printf("Sum:  %.2f", num1 + num2);
        break;

    case '-':
        printf("subtract: %.2f", num1 - num2);
        break;
    case '*':
        printf("multiplication: %.2f", num1 * num2);
        break;

    case '/':
        if ((int)num1 % (int)num2 == 0)
        {
            printf("num1 is divisible by num2: %.2f", num1 / num2);
        }
        else
        {
            printf("num1 is not divisible by num2: %.2f", num1 / num2);
        }

        break;
    }

    return 0;
}