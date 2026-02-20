#include<stdio.h>
int fib(n);
int main()
{
    int value;
    scanf("%d",&value);
    for(int i=1;i<=value;i++)
    {
        printf("%d",fib(i));
    }
}
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}