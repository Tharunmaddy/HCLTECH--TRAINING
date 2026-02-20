#include<stdio.h>
#include<stdbool.h>
bool perfect(int);
int main()
{
    int value;
    scanf("%d",&value);
    perfect(value)?printf("perfect number"):printf("not a perfect number");
}
bool perfect(int n)
{
    int ans=0;
    if(n<=0)
    return false;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        ans+=i;
    }
    return (ans==n);
}