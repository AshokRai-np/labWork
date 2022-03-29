// Generate fibonacci series
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < n; i++){
        fib[i] = fib[i -1] + fib[i - 2];
    }
    for(int j = 0; j < n; j++){
        printf("%d\t", fib[j]);
    }
}