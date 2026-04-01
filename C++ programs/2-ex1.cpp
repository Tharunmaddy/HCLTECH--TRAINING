// Create an Order class that owns a collection of line items (IDs and quantities). 
// Provide addLineItem(int id, int qty) and totalItems(); show object creation, modification, and summary printing.
#include<iostream>
using namespace std;
class Order
{
    int id;
    int qty;
    string name;
    public:
    void additem(int a,int b,string c)
    {
        id=a;
        qty=b;
        name =c;
    }
    void showitems()
    {
        cout<<"Item id :"<<id<<"\n";
        cout<<"Item quantity :"<<qty<<"\n";
        cout<<"Item name :"<<name<<"\n";
    }
};
int main()
{
    Order o1,o2;
    o1.additem(1,50,"iphone");
    o2.additem(2,30,"samsung");
    o1.showitems();
    o2.showitems();
}