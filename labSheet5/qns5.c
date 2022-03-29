// find the volume of cuboid
#include<stdio.h>

//fuction with arg and return type------------
/*
int volume(int, int, int); 
int main(){
    int l, b, h, v;
    printf("Enter the value of length: ");
    scanf("%d", &l);
    printf("Enter the value of breadth: ");
    scanf("%d", &b);
    printf("Enter the value of height: ");
    scanf("%d", &h);
    v = volume(l, b, h);
    printf("The volume of the cuboid is: %d", v);
}


int volume(int l, int b, int h){
   return l*b*h;
}
*/


// function with no arg and return type--------
/*
void volume();
int main(){
    volume();
}

void volume(){
    int l, b, h, v;
    printf("Enter the value of length: ");
    scanf("%d", &l);
    printf("Enter the value of breadth: ");
    scanf("%d", &b);
    printf("Enter the value of height: ");
    scanf("%d", &h);
    v = l*b*h;
    printf("The volume of the cuboid is: %d", v);
}
*/


// function with arg but no return type-----------
/*
void volume(int, int, int);
int main(){
    int l, b, h, v;
    printf("Enter the value of length: ");
    scanf("%d", &l);
    printf("Enter the value of breadth: ");
    scanf("%d", &b);
    printf("Enter the value of height: ");
    scanf("%d", &h);
    volume(l, b, h);
}

void volume(int l, int b, int h){
    printf("The volume of the cuboid is: %d", l*b*h);
}
*/


// function with no arg but return type------------
/*
int volume();
int main(){
    int v;
    v = volume();
    printf("The volume of the cuboid is: %d", v);
}

int volume(){
    int l, b, h, v;
    printf("Enter the value of length: ");
    scanf("%d", &l);
    printf("Enter the value of breadth: ");
    scanf("%d", &b);
    printf("Enter the value of height: ");
    scanf("%d", &h);
    return l*b*h;
}
*/