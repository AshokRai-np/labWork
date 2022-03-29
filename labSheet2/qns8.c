// Check whether the given number is Armstrong or not
#include<stdio.h>
int main(){
    int n, ans = 0, rem = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp = n;
    while(temp){
        rem = temp % 10;
        ans = ans + rem*rem*rem;
        temp = temp / 10;
    }
    if(ans == n){
        printf("The number is an Armstrong number.");
    }
    else{
        printf("The number is not an Armstrong number.");
    }
}