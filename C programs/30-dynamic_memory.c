// Allocate memory dynamically for struct Item array based on user input size.
//  Implement add and delete operations safely.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char name[20];
    int age;
}student;
void add(student *s1,int id,char a[],int age)
{
    strcpy(s1[id].name,a);
    s1[id].age=age;
}
int main()
{
    int na;
    printf("Enter the size :\n");
    scanf("%d",&na);
    student *s1=malloc(sizeof(student)*na);
    char n[]="tharun";
    strcpy(s1[0].name,n);
    // s1[0].name="tharun";
    printf("%s",s1[0].name);
    add(s1,1,"tharun",25);
    add(s1,2,"deepan",27);
}