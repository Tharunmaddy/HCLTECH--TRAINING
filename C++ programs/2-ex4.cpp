#include<iostream>
using namespace std;
class crypto
{
    int id;
    string name;
    public:
    crypto()
    {
        id=301;
        name="tharun";
    }
    friend void dumpforAudit(crypto c);
};
void dumpforAudit(crypto c)
{
    cout<<c.id<<"\n";
    cout<<c.name<<"\n";
}
int main()
{
    crypto t;
    dumpforAudit(t);
}