#include<iostream>
using namespace std;

int main()
{
    int r,i = 0;
    cout<<"Enter range: ";
    cin>>r;
    while(i<r)
    {
        if(i%2 != 0)
            cout<<i<<"\t";
        i++;
    }
    cout<<"\n";
}