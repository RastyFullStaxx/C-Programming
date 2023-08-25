#include <stdio.h>

int main(){

    // array = a data structure that can store many values of the same data type

    double prices[10];
    //char items[] = "Shoes, Shirt, Pants, Undergarments";

    prices[0] = 12.0;
    prices[1] = 14.0;
    prices[2] = 16.0;
    prices[3] = 18.0;
    prices[4] = 20.0;

    printf("$%.1lf", prices[0]);


    return 0;
}