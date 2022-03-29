// print name for user specified times using funtion
#include<stdio.h>
void printName(int, char []);
int main(){
    int n;
    char name[100];
    printf("Enter the value for number of iteration: ");
    scanf("%d", &n);
    printf("Enter your name: ");
    scanf("%s", name);
    printName(n, name);
}

void printName(int n, char name[]){
    for(int i = 1; i <= n; i++){
        printf("%s\n", name);
    }
}