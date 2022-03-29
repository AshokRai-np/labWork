// read n and print natural numbers from 1 - n using function
#include<stdio.h>
void printNum(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNum(n);
}

void printNum(int n){
    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
}