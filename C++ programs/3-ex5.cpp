#include<iostream>
using namespace std;
class vehicle 
{
    protected:
    string mode;
    public:
    vehicle()
    {
        mode="road";
    }

};
class car:virtual public vehicle
{
    protected:
    string car_name;
    public:
    car()
    {
        car_name="ferrari";
    }
};
class bike:virtual public vehicle
{
    protected:
    string bike_name;
    public:
    bike()
    {
        bike_name="hero_honda";
    }

};
class hybrid:public car,public bike
{
    public:
     hybrid()
     {
        cout<<"Vehicle run by "<<"\n";
     }
    void display()
    {
        cout<<"bike name "<<bike_name<<"\n";
        cout<<"car name "<<car_name<<"\n";
    }
};
int main()
{
    hybrid h;
    h.display();
    

}