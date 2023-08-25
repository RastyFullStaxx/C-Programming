#include <stdio.h>
#include <string.h>

int main (){

    //char x = 'X';
    //char y = 'Y';

    char x[] = "Rasty";
    char y[] = "Noemi";
    char temp[20];

    char z[] = "crushiecakes";
      
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
    

    //temp = x;
    //x = y;
    //y = temp;
    
    printf("%s\t%s", y, z);
    printf("\t%s\n\n\n", x);


    return 0;
}