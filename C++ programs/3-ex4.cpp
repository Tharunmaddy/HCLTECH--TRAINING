#include<iostream>
using namespace std;
class teacher
{
   protected:
   string teacher_name;
   public:
   teacher()
   {
        teacher_name="anushka";
   }
   void display()
   {
    cout<<"teacher name :"<<teacher_name<<"\n";
   } 
};
class researcher
{
    protected:
    string researcher_name;
    public:
    researcher()
    {
        researcher_name="nalini";
    }
    void display()
   {
    cout<<"researcher_name :"<<researcher_name<<"\n";
   } 

};
class professor:public teacher,public researcher
{
    public:
    string professor_name="sundhar";
    void display()
    {
        cout<<"Teacher name : "<<teacher_name<<"\n";
        cout<<"Researcher name : "<<researcher_name<<"\n";
        cout<<"Professor name : "<<professor_name<<"\n";
    }
};
int main()
{
    professor p;
    p.display();
};