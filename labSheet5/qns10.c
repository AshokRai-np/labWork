// read a number and print its multiplication table using function
#include<stdio.h>
void multiplication(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    multiplication(n);
}

void multiplication(int n){
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}