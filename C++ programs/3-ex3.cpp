#include<iostream>
using namespace std;
class device 
{
    protected:
    string name;
    public:
    device()
    {
        name="mobile";
    }
};
class mobile:public device
{
    protected:
    string model;
    public:
    mobile()
    {
        model="samsung s24";
    }
};
class smartphone:public mobile
{
    protected:
    int storage;
    int ram;
    public:
    smartphone()
    {
        storage =512;
        ram=16;
    }
    void display()
    {
        cout<<name<<"\n";
        cout<<model<<"\n";
        cout<<storage<<"\n";
        cout<<ram<<"\n";
    }
};
int main()
{
    device d;
    mobile m;
    smartphone s;
    s.display();

}