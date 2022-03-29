// Find the sum of odd numbers from 0 to 100 using do while loop;
#include<stdio.h>
int main(){
    int i = 1, sum = 0;
    do{
        sum = sum + i;
        i = i + 2;
    }while(i < 100);
    printf("%d", sum);
}