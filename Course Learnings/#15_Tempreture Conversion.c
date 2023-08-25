#include <stdio.h>
#include <ctype.h>

int main(){

    char units;
    float temp;

    printf("Is the temperature in \"F\" or \"C\"?\n");
    scanf("%c", &units);

        units = toupper(units);     //toupper and tolower makes an input and have it desired cases

    if (units == 'C'){
        printf("\nTemperature is in \"Celsius\"\n");        
        printf("Now, enter the temperature in \"Celsius\":  ");
        scanf("%f", &temp);
        printf("\nDegree in Celius: %.2f", temp);
        temp = (temp * 9/5) + 32;
        printf("\nDegree in Fahrenheit: %.2f\n\n", temp); 
    } else if(units == 'F'){
        printf("Temperature is in \"Fahrenheit\"\n");
        printf("Now, enter the temperature in \"Fahrenheit\":  ");
        scanf("%f", &temp); 
        printf("\nDegree in Fahrenheit: %.2f", temp);
        temp = (temp - 32) * 5/9;
        printf("\nDegree in Celius: %.2f\n\n", temp);
    } else {
        printf("%c IS NOT A VALID ENTRY! \nYOU STUPID BEING!!\n", units);
    }



    return 0;
}