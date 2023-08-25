#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.54);
    int d = ceil(3.14);             // ceiling function always round up
    int e = floor(3.56);            // floor function always round down
    int f = fabs(-99);              // absolute valiue
    int g = log(3);                 // find the logarithms of a value; %lf
    //int h = sin();
    //int i = cos();
    //int j = tan();

    printf("%lf", A);
    //printf("\n%lf", B);
    //printf("\n%d", C);
    //printf("\n%d", g);

    return 0;
}