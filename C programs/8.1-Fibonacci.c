#include<stdio.h>
int main()
{
    int value;
    scanf("%d",&value);
    int n1=0;
    int n2=1;
    int n3=0;
    if(value==0)
    return 0;
    for(int i=1;i<=value;i++)
    {
        printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}