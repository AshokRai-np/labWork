// Find all prime numbers between 1 and 100
#include<stdio.h>
int main(){
    for(int i = 1; i <= 100; i++){
        int count = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count = count + 1;
            }
            if(count > 2){
                break;
            }
        }
        if(count <= 2){
                printf("%d\n", i);
        }
    }
}