#include<stdio.h>
#include<string.h>
int main(){
    FILE *f1, *f2, *f3, *fw;
    f1 = fopen("firstFile.txt", "r");
    f2 = fopen("/home/koralnet/Desktop/secondFile.txt", "r");
    f3 = fopen("/home/koralnet/Desktop/thirdFile.txt", "r");
    fw = fopen("/home/koralnet/Desktop/writeFile.txt", "w");
    char firstText[100], secondText[100], thirdText[100];
    fgets(firstText, 100, f1);
    fgets(secondText, 100, f2);
    fgets(thirdText, 100, f3);
    int lenOfFirst = strlen(firstText);
    int lenOfSecond = strlen(secondText);
    int lenOfThird = strlen(thirdText);
    if(lenOfFirst > lenOfSecond && lenOfFirst > lenOfThird){
        fputs(firstText, fw);
    }
    else if(lenOfSecond > lenOfFirst && lenOfSecond > lenOfThird){
        fputs(secondText, fw);
    }
    else{
        fputs(thirdText, fw);
    }
}