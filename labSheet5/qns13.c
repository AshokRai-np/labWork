// find factorial of a number using function
#include<stdio.h>
int factorial(int);
int main(){
    int n, fact;
    printf("Enter the number: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial of %d is: %d", n, fact);
}

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}