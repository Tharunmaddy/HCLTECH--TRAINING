#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    cout<<"enter two numbers"<<"\n";
    cin>>a>>b;
    cout<<"Before swap :"<<a<<" "<<b<<"\n"; 
    swap(&a,&b);
    cout<<"After swap :"<<a<<" "<<b<<"\n"; 
    
}