#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    ((year%4==0||year%100!=0)||(year%400==0))?printf("It is a Leapyear"):printf("It is not a leapyear");
}