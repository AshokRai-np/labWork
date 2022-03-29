// Read a number and find its factorial using while loop and for loop
#include<stdio.h>
int main(){
    // using while loop
    /*
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0){
        fact = fact*n;
        n = n - 1;
    }
    printf("The factorial of the number is: %d", fact);
    */

    // Using for loop
    /*
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("The factorial of the number is: %d", fact);
    */
}