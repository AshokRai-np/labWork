// argument and return type function
#include<stdio.h>
int cube(int);
int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("The cue of the number is: %d", cube(n));
}

int compare(int n){
        return n*n*n;
}