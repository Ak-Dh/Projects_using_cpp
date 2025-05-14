#include<iostream>
using namespace std;

int main()
{
    int v,sum,a=0, b=1;
    cout<<"Enter any value: ";
    cin>>v;
    cout<<a<<" "<<b<<" ";
    sum=a+b;
    while(sum<=v)
    {
        cout<<sum<<" ";
        a=b;
        b=sum;
        sum=a+b;
    }
    cout<<"\n";
}