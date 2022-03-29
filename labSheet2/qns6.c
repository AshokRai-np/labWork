// Check whether the given number is prime or not using while loop and for loop
#include<stdio.h>
int main(){
    // using while loop
    /*
    int n, i = 1, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i <= n){
        if(n % i == 0){
            count = count + 1;
        }
        i++;
    }
    if(count > 2){
        printf("%d is not a prime number.", n);
    }
    else{
        printf("%d is a prime number.", n);
    }
    */

    // using for loop
    /*
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count = count + 1;
        }
    }
    if(count > 2){
        printf("%d is not a prime number.", n);
    }
    else{
        printf("%d is a prime number.", n);
    }
    */
}