#include <stdio.h>

int main(){


    //   variable    =    Allocated space in memory to store a value.
    //                    We refer to a variable's name to access the stored value.
    //                    That variable now behaves as if it was the value it contains.
    //                    BUT we need to declare what type of data we are storing. 

    int x = 123;    //declaration
    x = 123;        //initialization
    int Y = 321;    //declaration + initialization

    int age = 21;               //integers
    float gpa = 2.05;           //floating poit number
    char grade = 'C';           //single character
    char name[] = "Bro";        //array of characters

    // Format Specifiers
    // %d - decimals
    // %s - strings (for character array)
    // %c - character (for single character)

    printf("Your grade is %f", gpa);
    printf("\nYour name is %s", name);
    printf("\nYour grade is %c", grade);
    printf("\nYour age is %d", age);

    return 0;
}