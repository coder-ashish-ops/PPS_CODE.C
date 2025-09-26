#include<stdio.h>

int main(){
int a;
printf("Enter the number a: ");
scanf("%d",&a);

if(a%2==0){
    printf("a is divisible by 2");
}
else{
    printf("a is not divisible by 2");
}
    return 0; 
}