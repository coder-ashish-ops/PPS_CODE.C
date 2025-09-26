#include<stdio.h>

int main(){
int a,b;
printf("Enter the number a: ");
scanf("%d",&a);

printf("Enter the number b: ");
scanf("%d",&b);

if(a>b){
    printf("a is greater than b");
}
else if(b>a){

    printf("b is greater than a ");
}

else{
    printf("Both are equal");
}


    return 0; 
}