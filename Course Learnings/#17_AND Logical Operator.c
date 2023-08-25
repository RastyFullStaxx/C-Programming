#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = && (AND) checks if two conditions are true
    // both or more conditions must be true to execute the statement

    float temp = 24;
    bool sunny = 1;

    if (temp >= 0 && temp <= 30 && sunny){
        printf("The weather is good <33");
    } else {
        printf("The weather is bad :<");
    }

    return 0;
}