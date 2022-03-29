// Enter 15 values in array variable testArray and display it
#include<stdio.h>
int main(){
    int testArray[15];
    printf("Enter 15 values.\n");
    for(int i = 0; i < 15; i++){
        scanf("%d", &testArray[i]);
    }
    printf("The values in the array are:\n");
    for(int i = 0; i < 15; i++){
        printf("%d\n", testArray[i]);
    }
} 