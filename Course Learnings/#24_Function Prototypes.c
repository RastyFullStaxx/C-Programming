#include <stdio.h>

void hello(char[], int);        // this is function prototype

int main(){

    //  Function Prototypes
    //> is function declaration without a body, before main()
    //> Ensures that calls to a function are made with the correct arguments

    char name[] = "Rasty";
    int age = 20;

    hello(name, age);

    return 0;
}

void hello(char name[], int age){   // the function prototype body declared after the main body
    printf("Hello %s", name);
    printf("\nYou are %d years old\n\n\n", age);
}

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing

    // ADVANTAGES
    // Easier to navigate a program
    // Helps with debugging
    // Commonly used in header files