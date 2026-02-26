#include<stdio.h>
#include<stdbool.h>
bool arm(int);
int main()
{
    int value;
    scanf("%d",&value);
    (arm(value))?printf("Armstrong number"):printf("Not an armstrong number");
}
bool arm(int n)
{
    int su=0;
    int var=n;
    while(n!=0)
    {
        int rem=n%10;
        su+=rem*rem*rem;
        n=n/10;
    }
    return (su==var);
}