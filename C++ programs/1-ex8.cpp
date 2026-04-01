#include<iostream>
using namespace std;
struct customer
{
    int id;
    string name;
    int age;
};
struct order
{
    string product_name;
    int product_id;
    customer c1;
};
int main()
{
    order o1;
    cout<<"Enter prod id"<<"\n";
    cin>>o1.product_id;
    cout<<"Enter prod name"<<"\n";
    cin>>o1.product_name;
    cout<<"enter customer id"<<"\n";
    cin>>o1.c1.id;
    cout<<"enter customer name"<<"\n";
    cin>>o1.c1.name;
    cout<<"enter customer age"<<"\n";
    cin>>o1.c1.age;

    cout<<"product id :"<<o1.product_id<<"\n";
    cout<<"product name :"<<o1.product_name<<"\n";
    cout<<"customer id :"<<o1.c1.id<<"\n";
    cout<<"customer name :"<<o1.c1.name<<"\n";
    cout<<"customer age :"<<o1.c1.age<<"\n";
}