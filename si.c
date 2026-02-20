#include<stdio.h>
int simple(int a,int b,int c);
int main()
{
    int p=10000;
    int n=3;
    int r=10;
    printf("%d",simple(p,n,r));
}
int simple(int a,int b,int c)
{
    int res=a*b*c;
    return res/100;
}