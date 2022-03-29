// read two numbers where first number is base and the second number is the exponent of the first number. find the result using function
#include<stdio.h>
int power(int, int);
int main(){
    int b, e, ans = 0;
    printf("Enter the base number: ");
    scanf("%d", &b);
    printf("Enter the exponent number: ");
    scanf("%d", &e);
    ans = power(b, e);
    printf("The ans for %d^%d is: %d", b, e, ans);
}

int power(int b, int e){
    int ans = 1;
    for(int i = 1; i <= e; i++){
        ans = ans*b;
    }
    return ans;
}