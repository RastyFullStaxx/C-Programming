#include <stdio.h>

//typedef char user [25]

typedef struct {

    char name[25];
    int pass;
    int id;

} user;

int main(){

    // typedef = reserved keyword that gives an existing datatype a nickname

    user user1 = {"Rasty", 123, 123456789};
    user user2 = {"Nox", 321, 987654321};

    printf("%s\n", user1.name);
    printf("%d\n", user1.pass);
    printf("%d\n\n", user1.id);

    printf("%s\n", user2.name);
    printf("%d\n", user2.pass);
    printf("%d\n", user2.id);

    return 0;
}