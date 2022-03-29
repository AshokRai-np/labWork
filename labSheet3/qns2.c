// Enter values in array and find their sum and average
#include<stdio.h>
int main(){
    int n, sum = 0, avg = 0;
    printf("Enter the number of values to be entered in the array: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter the values in the array:\n"); 
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < n; i++){
        sum = sum + num[i];
    }
    avg = sum / n;
    printf("The sum of the values in the array is: %d\n", sum);
    printf("The average of the values in the array is: %d", avg);
}