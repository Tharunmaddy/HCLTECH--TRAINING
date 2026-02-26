#include<stdio.h>
#include<limits.h>
int main()
{
    int value;
    scanf("%d",&value);
    int su=0;
    while(value!=0)
    {
        int rem=value%10;
        if(su>(INT_MAX/10) ||su==(INT_MAX/10) && rem>7)
        {
            printf("Over flow");
        }
        if(su<(INT_MIN/10) ||su==(INT_MIN/10) && rem<-8)
        {
            printf("Over flow");
        }
        su=su*10+rem;
        value=value/10;
    }
    printf("Reversed Number :%d",su);
}