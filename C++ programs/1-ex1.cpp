#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string pass;
    cin>>pass;
    if(pass.length()>8)
    cout<<"password is greater than 8"<<"\n";
    else
    cout<<"password is not greater than 8"<<"\n";

}