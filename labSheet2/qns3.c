// Find sum and average of nth numbers
#include<stdio.h>
int main(){
    int n, sum = 0, avg = 0;
    printf("Enter the number of value you want to input: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter %d values from the keyboard.\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    for(int j = 0; j < n; j++){
        sum = sum + num[j];
    }
    avg = sum / n;
    printf("The sum of the values is: %d\n", sum);
    printf("The average of the values is: %d", avg);
}