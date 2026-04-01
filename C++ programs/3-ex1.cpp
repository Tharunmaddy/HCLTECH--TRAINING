#include<iostream>
using namespace std;
class book
{
    int isbn;
    string title;
    string author;
    public:
    book()
    {
        isbn=0;
        title="";
        author="";
    }
    void setisbn()
    {
        isbn=10;
    }
    void settitle()
    {
        title="fire of wings";
    }
    void setauthor()
    {
        author="abdul kalam";
    }
    void update_title(const string& m)
    {
        title=m;
    }
    void display()
    {
        cout<<isbn<<"\n";
        cout<<title<<"\n";
        cout<<author<<"\n";
    }
};
int main()
{
    book b;
    b.setisbn();
    b.settitle();
    b.setauthor();
    b.update_title("hello");
    b.display();
}