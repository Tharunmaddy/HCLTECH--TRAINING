// Implement a calculator using an array of function pointers for operations (+, -, *, /). 
// Allow user to select operation at runtime.
#include<stdio.h>
float add(float,float);
float sub(float,float);
float multi(float,float);
float div(float,float);
int main()
{
    float (*operations[4])(float ,float)={add,sub,multi,div};
    float a,b;
    int choice;
    printf("Choose :\n");
    printf("1-Add :\n");
    printf("2-Subtraction :\n");
    printf("3-Multiplication :\n");
    printf("4-Division :\n");
    scanf("%d",&choice);
    if(choice <1 ||choice >4)
    {
        printf("wrong choice\n");
        return 0;
    }
    printf("Enter the two values :\n");
    scanf("%f %f", &a,&b);
    float result = operations[choice-1](a,b);
    printf("Answer is :%.2f",result);
}
float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float multi(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    if(b==0)
    {
        printf("errror\n");
        return 0;
    }
    return a/b;
}