#include <stdio.h>

int main()
{
    float a;
    float b;

    printf("Enter number a: ");
    scanf("%f", &a);

    printf("Enter number b: ");
    scanf("%f", &b);
    printf("sum of a and b: %.2f\n", a + b);
    printf("subtract of a and b: %.2f\n", a - b);
    printf("muliplication of a and b: %.2f\n", a * b);
    printf("dividation of a and b: %.2f\n", a / b);

    return 0;
}