// Sort the values in array in ascending order
#include<stdio.h>
int main(){
    int n, temp;
    printf("Enter the number of values to be entered in the array: ");
    scanf("%d", &n);
    int num[n];  
    printf("Enter the values in the array:\n");  
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(num[i] < num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", num[i]);
    }
}