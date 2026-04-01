// #include<iostream>
// using namespace std;
// namespace sample
// {
//     class hello
//     {
//         public:
//         int a;
//         int b;
//         int display(int a,int b)
//         {
//             this->a=a;
//             this->b=b;
//             return a+b;
//         }
       
//     };
// }
// using namespace sample;
// int main()
// {
// // sample::hello a;
// hello a;
// cout<<"answer is :"<<a.display(10,20);
// }
// #include<iostream>
// using namespace std;
// namespace company
// {
//     namespace hr
//     {
//         void policy(string a)
//         {
//             cout<<"policy name is :"<<a<<"\n";
//         }
//     }
// }
// using namespace company::hr;
// int main()
// {
//     policy("insurance");
// }
// Generic 
#include<iostream>
using namespace std;
template<typename t1,typename t2>
t2 add(t1 a,t2 b)
{
    return a+b;
}
template<typename t1,typename t2>
t2 mul(t1 a,t2 b)
{
    return a*b;
}
int main()
{
    // cout<<add(string("tharun"),string("maddy"));
    // cout<<add(2.5,3.5);
    cout<<add(1,2.5)<<"\n";
    cout<<mul(2.5,3);
}