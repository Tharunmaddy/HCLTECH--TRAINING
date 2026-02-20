#include<stdio.h>
int main()
{
    int *ptr;
    int n;
    scanf("%d",&n);
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    while(ptr<arr+n)
    {
        ans+=*ptr;
        ptr++;
    }
    printf("avg is %.2f",(float)ans/n);
}