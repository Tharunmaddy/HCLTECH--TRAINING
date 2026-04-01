#include<iostream>
using namespace std;
class media
{
    public:
    virtual void play()=0;
};
class video:public media 
{
    void play()
    {
        cout<<"Playing video songs"<<"\n";
    }
};
class audio:public media
{
    void play()
    {
        cout<<"Playing audio songs"<<"\n";
    }

};
int main()
{
    media *m;
    audio a;
    video v;
    m=&a;
    m->play();
    m=&v;
    m->play();
}