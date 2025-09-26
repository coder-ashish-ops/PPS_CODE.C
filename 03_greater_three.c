#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    printf("Enter number c: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("a is greater than b and c");
    }
    else if (b >= a && b >= c)
    {
        printf("b is greater than a and c");
    }

    else
    {
        printf("c is greater than a and b");
    }

    return 0;
}
