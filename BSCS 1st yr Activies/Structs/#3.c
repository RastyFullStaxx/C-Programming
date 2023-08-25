#include <stdio.h>

struct Month {
    int monthNumber;
    char monthName[30];
    int days;
};

int main() {

    struct Month months[12];

    months[0] = (struct Month){1, "January", 31};
    months[1] = (struct Month){2, "February", 28};
    months[2] = (struct Month){3, "March", 31};
    months[3] = (struct Month){4, "April", 30};
    months[4] = (struct Month){5, "May", 31};
    months[5] = (struct Month){6, "June", 30};
    months[6] = (struct Month){7, "July", 31};
    months[7] = (struct Month){8, "August", 31};
    months[8] = (struct Month){9, "September", 30};
    months[9] = (struct Month){10, "October", 31};
    months[10] = (struct Month){11, "November", 30};
    months[11] = (struct Month){12, "December", 31};

    for (int i = 0; i < 12; i++) {
        printf("Month: %s\n", months[i].monthName);
        printf("Month Number: %d\n", months[i].monthNumber);
        printf("Number of Days: %d\n", months[i].days);
        printf("==============================\n");
    } printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    return 0;
}
