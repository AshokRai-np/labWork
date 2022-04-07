#include<stdio.h>
#include<string.h>
int main(){
    FILE *of, *nf;
    of = fopen("/home/koralnet/Desktop/textSample.txt", "r");
    nf = fopen("/home/koralnet/Desktop/textSample1.txt", "w");
    char n[100];
    char m[100][100];
    int count = 0, j = 0;
    fgets(n, 100, of);
    for(int i = 0; i <= strlen(n); i++){
        if(n[i] == ' ' || n[i] == '\0'){
            m[count][j] = '\0';
            if((strcmp(m[count], "three") != 0) && (strcmp(m[count], "bad") != 0) && (strcmp(m[count], "time") != 0) &&
            (strcmp(m[count], "Three") != 0) && (strcmp(m[count], "Bad") != 0) && (strcmp(m[count], "Time") != 0) &&
            (strcmp(m[count], "three.") != 0) && (strcmp(m[count], "bad.") != 0) && (strcmp(m[count], "time.") != 0)){
                fprintf(nf, "%s ", m[count]);
            }
                
            count++;
            j = 0;
        }
        else{
            m[count][j] = n[i];
            j++;
        }
    }
}