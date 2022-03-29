// calculate Simple Interest using function
#include<stdio.h>
float simpleInterest(float, float, float);
int main(){
    float p, r, t, si;
    printf("Enter Principle: ");
    scanf("%f", &p);
    printf("Enter Time: ");
    scanf("%f", &t);
    printf("Enter Rate: ");
    scanf("%f", &r);
    si = simpleInterest(p, t, r);
    printf("The value of Simple Interest is: %.2f", si);
}

float simpleInterest(float p, float t, float r){
    float si = (p*t*r)/100;
    return si;
}