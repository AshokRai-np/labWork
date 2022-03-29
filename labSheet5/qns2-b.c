// print area of rectangle using function with arg and return type
#include<stdio.h>
int area(int, int);
int main(){
    int length, breadth;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &breadth);
    printf("The area of the rectangle is: %d", area(length, breadth));

}

int area(int length, int breadth){
    return length*breadth;
}