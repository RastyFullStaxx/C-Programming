#include <stdio.h>

void sort(char nums[], int size){

    for(int i=0;i<size-1;i++){

        for(int j=0;j<size-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
         }
    }
}

void printNums(char nums[], int size){
    for (int i = 0; i < size; i++){
        printf("%c ", nums[i]);
    }
    
}

int main(){

    //int nums[] = {23, 324, 45, 2, 342, 54, 4};
    char nums[] = {'A', 'H', 'B', 'E'};
    int size = sizeof(nums)/sizeof(nums[0]);

    sort(nums, size);
    printNums(nums, size);

    return 0;
}