// Read two n*n arrays and put the sum of these num in third array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of values to be entered in the array: ");
    scanf("%d", &n);
    int num1[n][n], num2[n][n], sum[n][n];    
    printf("Enter the values in the first array:\n"); 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &num1[i][j]);
        }       
    }
    printf("Enter the values in the second array:\n"); 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &num2[i][j]);
        }       
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum[i][j] = num1[i][j] + num2[i][j];
        }       
    }
    printf("The sum of the arrays is: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", sum[i][j]);
        }       
        printf("\n");
    } 
}