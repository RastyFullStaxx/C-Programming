#include <stdio.h>

int main(){

    // breaks = exits a loop/switch
    // continue = skips the rest of code and & forces the next iteration of the loop

    // continue
    for (int i=1;i<=20;i++){
        if(i==13){
            printf("\n");
            continue;
        }
        printf("%d\n", i);
    } 

    printf("\n\n\n");

    // break
    for (int i=1;i<=20;i++){
        if(i==13){
            printf("\n");
            break;
        }
        printf("%d\n", i);
    } 

    return 0;
}