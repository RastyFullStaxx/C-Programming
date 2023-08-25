#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter your desired operator (+-*/): ");
    scanf("%c", &operator);

    switch (operator){
        case '+':
        printf("ADDITION MODE INITIATED.");
        printf("\nInput the augend:  ");
        scanf("%lf", &num1);
        printf("Input the addend:  ");
        scanf("%lf", &num2);
        result = num1 + num2;
        printf("Inputs: %.lf + %.lf", num1, num2);
        printf("\nOutput(Sum): %.2lf\n\n\n", result);
        break;
        
        case '-':
        printf("\nSUBTRACTION MODE INITIATED.");
        printf("\nInput the minuend:  ");
        scanf("%lf", &num1);
        printf("Input the subtrahend:  ");
        scanf("%lf", &num2);
        result = num1 - num2;
        printf("Inputs: %.lf - %.lf", num1, num2);
        printf("\nOutput(Difference): %.2lf\n\n\n", result);
        break;
        
        case '*':
        printf("\nMULTIPLICATION MODE INITIATED.");
        printf("\nInput the multiplier:  ");
        scanf("%lf", &num1);
        printf("Input the multiplicand:  ");
        scanf("%lf", &num2);
        result = num1 / num2;
        printf("Inputs: %.lf x %.lf", num1, num2);
        printf("\nOutput(Product): %.2lf\n\n\n", result);
        break;

        case '/':
        printf("\nDIVISION MODE INITIATED.");
        printf("\nInput the dividend:  ");
        scanf("%lf", &num1);
        printf("Input the divisor:  ");
        scanf("%lf", &num2);
        result = num1 * num2;
        printf("Inputs: %.lf / %.lf", num1, num2);
        printf("\nOutput(Quotient): %.2lf\n\n\n", result);
        break;
    
        default:
        printf("THAT'S AN INVALID OPERATOR BOZO!!");
        break;
    }

    return 0;
}