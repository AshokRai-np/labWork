// calculate square of a number using function
#include<stdio.h>
void square(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    square(n);
}

void square(int n){
    int sqr;
    sqr = n*n;
    printf("The square of the number is: %d", sqr);
}