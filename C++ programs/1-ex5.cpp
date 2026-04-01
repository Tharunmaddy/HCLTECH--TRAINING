#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<"\n";
    cin>>a>>b;
    cout<<"Bitwise and"<<(a&b);
    cout<<"Bitwise or"<<(a|b);
    cout<<"Bitwise xor"<<(a^b);
    cout<<"Left shift"<<(a<<b);
    cout<<"Right shift"<<(a>>b);
}