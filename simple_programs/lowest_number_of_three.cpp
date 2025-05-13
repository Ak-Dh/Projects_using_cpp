#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three values:\n";
    cin>>a;
    cin>>b;
    cin>>c;

    if(a<b && a<c)
        cout<<a<<" is the lowest value\n";
    else if(b<a && b<c)
        cout<<b<<" is the lowest value\n";
    else
        cout<<c<<" is the lowest value\n";
}