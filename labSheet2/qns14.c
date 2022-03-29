// Pattern Printing 
#include<stdio.h>
int main(){
    // a)
    /*
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    */

    // b)
    /*
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    */

    // c)
    /*
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    */

    // d)
    for(int i = 5; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("1");
        }
        printf("\n");
    }
}