#include<stdio.h>

int main(){
char letters;

printf("Enter the letter: ");
scanf("%c",&letters);

if(letters>='a'&& letters<='z'){
    printf("Letter is lowercase:%c ", letters );
}
else if(letters>='A'&&letters<='Z'){
    printf("Letter is upercase: %c", letters);
}
else{
    printf("Letter is not valid: ");
}

    return 0; 
}