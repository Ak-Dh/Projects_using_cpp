#include<iostream>
using namespace std;

int main()
{
    int r,i=0,avg=0,count=0;
    cout<<"Enter range: ";
    cin>>r;
    while(i<=r)
    {
        if(i%2 == 0)
        {
            avg+=i;
            count++;
        }
        i++;
    }    
    cout<<"average of all even numbers upto "<<r<<" : "<<avg/count<<"\n";
}