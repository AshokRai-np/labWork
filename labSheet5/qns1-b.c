// argument and no return type function
#include<stdio.h>
void cube(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    cube(n);
}

void    cube(int n){
    printf("The cube of the number is: %d", n*n*n); 
}