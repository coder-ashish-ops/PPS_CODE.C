#include <stdio.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Thusday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf(" invalide");
    }
    return 0;
}