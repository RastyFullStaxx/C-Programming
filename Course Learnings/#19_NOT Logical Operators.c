#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = ! reverses the state of a condition
    // best used for boolians

    bool sunny = 1;

    if (!sunny){
        printf("It is not sunny outside <33\n\n");
    } else{
        printf("It is sunny outside :<<\n\n");
    }

    return 0;
}