// Read age of 20 people and count the number of people of age group 50-60.
#include<stdio.h>
int main(){
    int age[20], count = 0;
    printf("Enter the age of 20 people.\n");
    for(int i = 0; i < 20; i++){
        scanf("%d", &age[i]);
    }
    for(int j = 0; j < 20; j++){
        if(age[j] >= 50 && age[j] <= 60){
            count = count + 1;
        }
    }
    printf("The number of people of the age group is: %d", count);
}