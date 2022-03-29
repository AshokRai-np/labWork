// swap two numbers using function
#include<stdio.h>
void swap(int *, int *);
int main(){
    int n, m;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    printf("Enter the value for m: ");
    scanf("%d", &m);
    printf("Value before swap: \nm = %d\tn = %d\n", m, n);
    swap(&n, &m);
    printf("Value after swap: \nm = %d\tn = %d", m, n);
}

void swap(int *n, int *m){
    *n = *n + *m;
    *m = *n - *m;
    *n = *n - *m;


}