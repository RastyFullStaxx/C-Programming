#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';            // %c  // single character 
    char b[] = "Rasty";      // %s  // array of characters

    float c = 3.141592653;   // %f  // 7 (including the integers)
    double d = 3.14159265358979323846264;     // $lf // 16 digits (including the integers)

    //printf("%0.15f\n", c);          // to control the amount of numbers to display;
    //printf("%0.15lf\n", c);         // put 0.n after the format specifier
                                    // where n is the number of digits you
                                    // want to dispaly 

    bool e = false;                  //%d - 1 byte (true or false)            
    bool f = true;                   // 1 true, 0 false
    //printf("%d %d", e, f);

    char g = 99;                    //a number from -128 to +127 could be displayed
    //printf("%c", g);                //using the ascii table; 99 corresponds to letter d

    unsigned char h = 255;          //%d - using unsigned to char variable 
    printf("%c", h);                //will you to dispaly 0 to +255 numbers

    short int i = 32767;            //%d - 2 bytes (-32,768 to +32,767)
    unsigned short int j = 65535;   //%d - 2 bytes (0 to +65,535)
    //printf("%d", i);              //%u - for unsigned int
    //printf("\n%d", j);

    long long int z = 78523474589547894537845378;           //%lld - 8 bytes - -9 quintillion to +9 quintillion
    unsigned long long int x = 5482323584908592340845930;   //%llud - 8 bytes - 0 to +18 quintillion                 

    return 0;
}