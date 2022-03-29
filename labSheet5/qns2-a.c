// find area of rectangle using argument and no return type function
#include<stdio.h>
void area(int, int);
int main(){
    int length, breadth;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &breadth);
    area(length, breadth);
}

void area(int length, int breadth){
    printf("The area of rectangle is: %d", length*breadth);
}