#include<iostream>
using namespace std;

int main()
{
    int n,i=1,count=0;
    cout<<"Enter any number : ";
    cin>>n;
    while(i<=n)
    {
        if(n%i == 0)
            count++;
        i++;
    }

    if(count == 2)
        cout<<n<<" is a prime number\n";
    else
        cout<<n<<" is not a prime number\n";
}