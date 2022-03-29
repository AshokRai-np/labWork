// read radius of a circle and find its area using function
#include<stdio.h>
float area(int, float);
int main(){
    int r;
    float a;
    const float pi = 3.14;
    printf("Enter the value of radius: ");
    scanf("%d", &r);
    a = area(r, pi);
    printf("The area of the circle is: %.2f", a);
}

float area(int r, float pi){
    float a;
    a = pi*r*r;
    return a;
}