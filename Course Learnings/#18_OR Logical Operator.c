#include <stdio.h>
#include <stdbool.h>

int main(){

    // Logical operator = || OR checks if at least one condition is true 

    float temp = 30;
    bool sunny = 1; 

    printf("Input the temperature for today: ");
    scanf("%f", &temp);

    //if (temp <= 0){
    //    printf("\nThe weather is too cold :<\n\n");
    //} else if (temp >= 30){
    //    printf("\nThe weather is too hot :<\n\n");
    //} else{
    //    printf("\nThe weather is nice <33\n\n");
    //}

    if (temp <= 0 || temp >= 30){
        printf("\nThe weather is bad :<<\n\n");
    } else{
        printf("\nThe weather is nice <33\n\n");
    } 
    

    return 0;
}