#include <stdio.h>

int findMax(int x, int y){

    //if (x > y){
    //    return x;
    //} else{
    //    return y;
    //}
    return (x > y) ? x : y;
}

int main(){

    // ternary operator = shortcut to if/else when assigning/returning a value
    // snippet: (condition) ? value_if_true : value_if_false

    int max = findMax(7, 4);
    printf("%d", max);

    return 0;
}