// Read a number and print the number's multiplication table
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The multiplication table of %d is:\n", n);
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}