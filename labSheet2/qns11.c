// Find all the Armstrong number between 100 and 500
#include<stdio.h>
int main(){
    int i = 100;
    while(i <= 500){ 
        int temp = i;
        int ans = 0, rem = 0;
        while(temp){
            rem = temp % 10;
            ans = ans + rem*rem*rem;
            temp = temp / 10;
        }
        if(ans == i){
            printf("%d\n", i);
        }
        i++;
    }
}