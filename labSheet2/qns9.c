// Check whether the given number is palindrome or not
#include<stdio.h>
int main(){
    int n, newNum = 0, rem = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp = n;
    while(temp){
        rem = temp % 10;
        newNum = newNum*10 + rem;
        temp = temp / 10;
    }
    if(newNum == n){
        printf("It is a palindrome number.");
    }
    else{
        printf("It is not a palindrome number.");
    }
}