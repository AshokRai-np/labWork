// Read a 3d array and display it
#include<stdio.h>
int main(){
    int num[3][3];    
    printf("Enter the values in the array:\n"); 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &num[i][j]);
        }       
    }
    printf("The array is: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", num[i][j]);
        }       
        printf("\n");
    }
}