// Define a struct Product with price and discount. Write two functions:
#include<stdio.h>
typedef struct 
{
    float price;
    float discount;
}product;
void callbyvalue(product p1,float a1,float a2)
{
    p1.price=a1;
    p1.discount=a2;
    
}
void callbyaddr(product *p1,float a1,float a2)
{
    p1->price=a1;
    p1->discount=a2;
    
}
int main()
{
    product p1;
    p1.price=1000;
    p1.discount=10;
    printf("Before function call\n");
    printf("Price :%.2f\n",p1.price);
    printf("discount :%.2f\n",p1.discount);
    callbyvalue(p1,2000,20);
    printf("Callbyvalue :\n");
    printf("Price :%.2f\n",p1.price);
    printf("discount :%.2f\n",p1.discount);

    callbyaddr(&p1,2000,20);
    printf("Callbyaddr :\n");
    printf("Price :%.2f\n",p1.price);
    printf("discount :%.2f\n",p1.discount);

}