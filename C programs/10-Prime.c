#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool prime(int value);
int main()
{
    int value;
    scanf("%d",&value);
    if(prime(value))
    printf("It is a prime number");
    else
    printf("It is not a prime number");
}
bool prime(int n)
{
    if(n==0||n==1)
    return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}