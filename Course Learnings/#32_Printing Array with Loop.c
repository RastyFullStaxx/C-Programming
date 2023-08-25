#include <stdio.h>

int main(){

    int arr[9];
    
    for (int i=0; i <= 8; i++){
        printf("Enter item No.%d: ", i);
        scanf(" %d", &arr[i]);
    }
    
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("\nInput %d: %d", i, arr[i]);
    } printf("\n\n\n");
    

    return 0;
}