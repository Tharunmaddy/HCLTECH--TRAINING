#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    int n;
    cout<<"enter arr size"<<"\n";
    cin>>n;
    int arr[n];
    unordered_map<int ,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    for(auto a:m)
    {
        if(a.second>1)
        cout<<"Duplicate element :"<<a.first<<"\n";
    }

}