#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases
    
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("EXCELLENT!\n");   
            break;
        case 'B':
            printf("SUPERIOR!\n");
            break;
        case 'C':     
            printf("UHH, IT'S OKAY??\n");
            break;
        case 'D':     
            printf("I.. DUNNO...\n");
            break;
        case 'F':     
            printf("YOU'RE AN IDIOT!\n");
            break;
        default:
            printf("You've an input an invalid grade");
            break;
    }

    return 0;
}

