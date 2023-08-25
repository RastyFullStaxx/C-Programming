#include <stdio.h>

     

void birthday(char ww[], int ss){   // parameters = what the functions expects when invoked

    printf("\nHappy birthday dear %s!", ww);
    printf("\nYou are %d years old!", ss);

}

int main(){

    char name[] = "Rasty";
    int age = 18;

    birthday(name, age);            // arguments = what we are sending to a function

    return 0;
}