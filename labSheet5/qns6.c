// find the largest number between two numbers using function
#include<stdio.h>
int greater(int, int);
int main(){
    int n, m, g;
    printf("Enter two numbers: \n");
    scanf("%d%d", &n, &m);
    g = greater(n, m);
    printf("The greater number between given numbers is: %d", g);
}

int greater(int n, int m){
    if(n > m){
        return n;
    }
    else{
        return m;
    }
}