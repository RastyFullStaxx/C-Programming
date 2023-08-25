#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tues = 3, Wed = 4, Thurs = 5, Fri = 6, Sat = 7};

int main(){

    // enum = a user defined type of named integer identifiers
    //        helps to make a program more readable 
    //        not strings

    enum Day today = Mon;

    //printf("Today is %d", today);

    if (today == Sun || today == Sat){
        printf("Today is weekends, horaayy!!");
    } else {
        printf("Today is a weekday, nooo,,,,");
    }

    return 0;
}