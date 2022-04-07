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
            if(strcmp(m[count], "Ram") == 0){
                strcpy(m[count], "Hari");
                fprintf(nf, "%s ", m[count]);
            }
            else if(strcmp(m[count], "Sita") == 0){
                strcpy(m[count], "Gita");
                fprintf(nf, "%s ", m[count]);
            }
            else if(strcmp(m[count], "Govinda") == 0){
                strcpy(m[count], "Shiva");
                fprintf(nf, "%s ", m[count]);
            }
            else{
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