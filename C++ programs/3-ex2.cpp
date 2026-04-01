#include<iostream>
using namespace std;
class employee
{
    protected:
    string name;
    int salary;
    public:
    employee()
    {
        name="tharun";
        salary=30000;
    }

};
class manager:public employee
{
    string department;
    public:
    manager()
    {
        department="cse";
    }
    void display()
    {
        cout<<name<<"\n";
        cout<<salary<<"\n";
        cout<<department<<"\n";
    }

};
int main()
{
    employee e;
    manager m;
    m.display();
}