
#include<stdio.h>
#include<string.h>
void parse(char []);
int main(){
   FILE *of, *nf;
   of = fopen("/home/koralnet/Desktop/textSample.txt", "r");
   nf = fopen("/home/koralnet/Desktop/textSample1.txt", "w");
   char text[100];
   char holder[13][100];
   int ctr = 0, j = 0;
   char c;
   fgets(text, 100, of);
   parse(text);


}

// Parse the string to words
void parse(char str[]){
   int ctr = 0, j = 0;
   int n = strlen(str);
   char word[n][10];
   for(int i = 0; i <= n; i++){
      if(str[i] == ' ' || str[i] == '\0'){
         word[ctr][j] = '\0';
         ctr++;
         j = 0;
      }
      else{
         word[ctr][j] = str[i];
         j++; 
      }
   }
   for(int i=0; i < ctr; i++){
      if((strcmp(word[i], "three") != 0) && (strcmp(word[i], "bad") != 0) && (strcmp(word[i], "time") != 0)){
          printf(" %s\n", word[i]);
      }
   }
        
}