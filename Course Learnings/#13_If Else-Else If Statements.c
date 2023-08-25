#include <stdio.h>

int main(){

    int age;

    printf("Print your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You can register!");
    } else if (age == 0) {
        printf("You are still a gas idiot!");    }
    else {
        printf("HAHAH, grow up kid!");
    } 
        
    
    return 0;
}