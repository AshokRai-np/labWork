// find product of two n*n matrices
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of values to be entered in the array: ");
    scanf("%d", &n);
    int num1[n][n], num2[n][n], product[n][n];    
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
            product[i][j] = 0;
            for(int k = 0; k < n; k++){
                product[i][j] += num1[i][k]*num2[k][j];
            }
        }
    }
    printf("The product of the matrices is: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", product[i][j]);
        }       
        printf("\n");
    }
}