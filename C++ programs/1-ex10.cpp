#include<iostream>
using namespace std;
class dyna
{
    public:
    int size=0;
    int length=2;
    int *arr=new int[length];
    // dyna(int a=2)
    // {
    //     length=a;
    //     arr=new int[length];
    // }
    void insert(int value)
    {
        if(size==length)
        {
            length=length*2;
            int *arr2 =new int[length];
            for(int i=0;i<size;i++)
            arr2[i]=arr[i];
            delete[] arr;
            arr=arr2;
        }
        arr[size]=value;
        size++;

    }
    void display()
    {
        for(int i=0;i<size;i++)
        cout<<arr[i]<<"\n";
    }
};
int main()
{
    dyna d;
    d.insert(10);
    d.insert(20);
    d.insert(30);
    d.insert(40);
    d.display();
}