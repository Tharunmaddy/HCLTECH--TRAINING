#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;
    cout<<"String length is :"<<name.length()<<"\n";
    for(int i=0;i<name.length();i++)
    {
        name[i]=name[i]-32;
    }
    cout<<"Upper case :"<<name;
}