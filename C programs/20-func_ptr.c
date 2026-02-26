#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    if(b==0)
    {
    printf("error");
    return 0;    
    }
    return a/b;
}
int main()
{
    int (*func) (int,int);
    int a,b,n;
    scanf("%d %d",&a,&b);
    printf("Choose :\n");
    printf("1-Add :\n");
    printf("2-Subtraction :\n");
    printf("3-Multiplication :\n");
    printf("4-Division :\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            func=add;
            break;
        case 2:
            func=sub;
            break;
        case 3:
            func=multi;
            break;
        case 4:
            func=div;
            break;
        default:
            printf("Entered choice is incorrect\n");
            return 1;
    }
    int ans=func(a,b);
    printf("Answer is :%d",ans);

}