#include<iostream>
using namespace std;
bool ispal(string n)
{
    int i=0;
    int j=n.length()-1;
    while(i<=j)
    {
        if(n[i]!=n[j])
        return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string name;
    cin>>name;
    if(ispal(name))
    cout<<"It is palindrome";
    else
    cout<<"It is not palindrome";
}