// In a Rectangle class, ensure width and height are always positive via private members + public setters.
// Use this in setters to throw or clamp values; demonstrate attempts to violate constraints from main().
#include<iostream>
using namespace std;
class rectangle
{
    double width;
    double height;
    public:
    void setwidth(double width)
    {
        if(width<0)
        throw invalid_argument("Negative is not allowed");
        this->width=width;
    }
    void setheight(double height)
    {
        if(height<0)
        throw invalid_argument("Negative is not allowed");
        this->height=height;
    }
    double getwidth()
    {
        return width;
    }
    double getheight()
    {
        return height;
    }
    double getarea()
    {
        return width*height;
    }
    
    
};
int main()
{
    rectangle r;
    try
    {
        r.setwidth(20);
        r.setheight(30);
        r.setwidth(-2);
        cout<<"width is :"<<r.getwidth()<<"\n";
        cout<<"width is :"<<r.getheight()<<"\n";
        cout<<"width is :"<<r.getarea()<<"\n";


    }
    catch(const exception& e)
    {
        cout <<"error :"<< e.what() << '\n';
    }
    
}