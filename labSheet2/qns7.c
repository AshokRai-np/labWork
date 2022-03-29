// Read a number and find the sum of the digits of the number
#include<stdio.h>
int main(){
    int n, sum = 0, rem = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(n){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("The sum of the digits of the numbe is: %d", sum);
}