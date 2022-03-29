// separate odd and even numbers in the array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of values to be entered in the array: ");
    scanf("%d", &n);
    int num[n];    
    printf("Enter the values in the array:\n"); 
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    for(int j = 0; j < n; j++){
        if(num[j]%2 == 0){
            printf("%d => Even\n", num[j]);
        }
        else{
            printf("%d => Odd\n", num[j]);
        }
    }
}