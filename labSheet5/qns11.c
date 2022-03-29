// hahaha hahaha haahaahaa
#include<stdio.h>
void reverse(int);
void primeOrNot(int);
void sumOfDigits(int);
void palindromeOrNot(int);
int main(){
    char choice;
    int n;
    printf("Enter a to reverse number.\nEnter b to find given number is prime or not.\n");
    printf("Enter c to find the sum of digits of number.\nEnter d to check if the number is palindrome or not.\n");
    scanf("%c", &choice);
    printf("Enter a number: ");
    scanf("%d", &n);
    switch(choice){
        case 'a':
            reverse(n);
            break;
        case 'b':
            primeOrNot(n);
            break;
        case 'c':
            sumOfDigits(n);
            break;
        case 'd':
            palindromeOrNot(n);
            break;
        default:
            printf("Enter the valid character.");
    }

}

void reverse(int n){
    int rem = 0;
    int rev = 0;
    while(n){
        rem = n % 10;
        rev = rev*10 + rem;
        n = n / 10;
    }
    printf("The reversed number is: %d", rev);
}

void primeOrNot(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            count++;
        }
        if(count > 2){
            break;
        }
    }
    if(count > 2){
        printf("%d is Composit number.", n);
    }
    else{
        printf("%d is Prime number.", n);
    }
}

void sumOfDigits(int n){
    int rem = 0, sum = 0;
    while(n){
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("The sum of the digits of the number is: %d", sum);
}

void palindromeOrNot(int n){
    int rem = 0;
    int rev = 0;
    int temp = n;
    while(n){
        rem = n % 10;
        rev = rev*10 + rem;
        n = n / 10;
    }
    if(rev == temp){
        printf("%d is a palindrome number.", temp);
    }
    else{
        printf("%d is not a palindrome number.", temp);
    }
}