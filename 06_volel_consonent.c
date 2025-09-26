#include <stdio.h>

int main()
{
    char letter;
    printf("Enter the latter :");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
         letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf("letter is vovel");
    }
    else
    {
        printf("letter is consonent");
    }
    return 0;
}