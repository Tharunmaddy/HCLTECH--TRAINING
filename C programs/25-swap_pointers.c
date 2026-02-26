// Write a function that swaps two pointers using a pointer-to-pointer.
// Demonstrate with two dynamically allocated strings.
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void swap(char **s1,char **s2);
int main()
{
    char *s1=malloc(20);
    char *s2=malloc(20);
    printf("Enter the names:\n");
    fgets(s1,20,stdin);
    fgets(s2,20,stdin);
    printf("Before swapping\n");
    printf("%s",s1);
    printf("%s",s2);
    swap(&s1,&s2);
    printf("After swapping\n");
    printf("%s",s1);
    printf("%s",s2);
}
void swap(char **s1,char **s2)
{
    char *temp=*s1;
    *s1=*s2;
    *s2=temp;
}