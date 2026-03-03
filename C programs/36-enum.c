#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union data{
    int n;
    int m;
    float value;
    char name[5];
};
int main(){
    union data d;
    d.n=20;
    strcpy(d.name,"thar");
    printf("%d \n",d.m);
    printf("%d",d.name);
}

