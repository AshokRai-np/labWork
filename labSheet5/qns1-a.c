// No argument and no return type function
#include<stdio.h>
void cube();
int main(){
    cube();
}

void cube(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The cube of the number is: %d", n*n*n);
}