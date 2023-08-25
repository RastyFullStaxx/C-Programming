#include <stdio.h>
#include <math.h>

    // return statement in a function returns a specific
    // value to the main function when called  

double square(double x){

    //double result = x * x;
    //return result;

    return x*x;

}

int main(){

    double x = square(3.14);
    printf("%.3lf", x);

    return 0; 
} 