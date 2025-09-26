#include<stdio.h>

int main(){
int number1, number2;

printf("Enter the number1: ");
scanf("%d",&number1);

printf("Enter the number2: ");
scanf("%d",&number2);

printf("dividation of number1 and number2: %d\n", number1/number2);

if(number1 % number2 == 1 || number1%number2==number1||number2){
    printf("This is a primary number: %d", number1 % number2);
}
else if(number1%number2!=0){
    printf("this is not a primary number: ");
}
    return 0; 
}