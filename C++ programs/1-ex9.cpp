#include<iostream>
using namespace std;
typedef struct 
{
    int rollno;
    string dept;
    string name;
}student;
int main()
{
    student s1;
    cout<<"enter roll no :"<<"\n";
    cin>>s1.rollno;
    cout<<"enter dept :"<<"\n";
    cin>>s1.dept;
    cout<<"enter name :"<<"\n";
    cin>>s1.name;

    cout<<"Roll no :"<<s1.rollno<<"\n";
    cout<<"Dept :"<<s1.dept<<"\n";
    cout<<"Name :"<<s1.name<<"\n";
}