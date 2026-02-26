// Create a struct Order containing struct Customer and struct Item.
// Implement a function to print complete order details.
#include<stdio.h>
#include<stdlib.h>
struct Item{
    char name[25];
    int price;
};
struct customer
{
    char name[20];
    int age;
};
struct order{
    int id;
    struct customer c1;
    struct Item item;
};
void add_details(struct order *o1,int id,char name1[],int age,char name2[],int cost)
{
    o1->id=id;
    strcpy(o1->c1.name,name1);
    o1->c1.age=age;
    strcpy(o1->item.name,name2);
    o1->item.price=cost;
}
void printdetails(struct order *o1)
{
    printf("Customer id : %d",o1->id);
    printf("Customer name : %d",o1->c1.name);
    printf("Customer age : %d",o1->c1.age);
    printf("Customer product : %d",o1->item.name);
    printf("Customer product cost : %d",o1->item.price);
}
int main()
{
    struct order o1;
    add_details(&o1,1,"tharun",25,"shoes",500);
    printdetails(&o1); 
}