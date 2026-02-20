#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans=1;
    if(n==0)
    return 0;
    for(int i=n;i>0;i--)
    {
        ans=ans*i;
    }
    printf("%d",ans);
}