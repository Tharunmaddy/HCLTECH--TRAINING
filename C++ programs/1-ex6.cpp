#include<iostream>
using namespace std;
int main()
{
    int choice;
    int a,b;
    do {
        cout<<"\n"<<"1-Add"<<"\n";
        cout<<"2-Subtraction"<<"\n";
        cout<<"3-Multiplication"<<"\n";
        cout<<"4-Division"<<"\n";
        cout<<"5-Exit"<<"\n";
        cout<<"Enter the choice :"<<"\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter two numbers";
                cin>>a>>b;
                cout<<"Answer is :"<<a+b;
                break;
            case 2:
                cout<<"Enter two numbers";
                cin>>a>>b;
                cout<<"Answer is :"<<a-b<<"\n";
                break;
            case 3:
                cout<<"Enter two numbers";
                cin>>a>>b;
                cout<<"Answer is :"<<a*b<<"\n";
                break;
            case 4:
                cout<<"Enter two numbers";
                cin>>a>>b;
                cout<<"Answer is :"<<a/b<<"\n";
                break;
            case 5:
                cout<<"Exit";
                break;
            default:
                cout<<"Wrong choice"<<"\n";
                cout<<"Try valid number"<<"\n";

        }
    }while(choice!=5);
}