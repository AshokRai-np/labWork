// Enter the name of 5 students and display it in ascending order
#include<stdio.h>
#include<string.h>
int main(){
    char names[5][100];
    char temp[100];
    printf("Enter the name of five students:\n");
    for(int i = 0; i < 5; i++){
        scanf("%s", names[i]);
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(strcmp(names[i], names[j]) < 1){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("The sorted name list is:\n");
    for(int i = 0; i < 5; i++){
        printf("%s\n", names[i]);
    }
}