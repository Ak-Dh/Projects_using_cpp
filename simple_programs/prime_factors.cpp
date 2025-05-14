#include<iostream>
using namespace std;

int main()
{
    int n, count=0;
    cout<<"Enter any number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            for(int j=1; j<=i; j++)
            {
                if(i%j==0)
                    count++;
            }
            if(count==2)
                cout<<i<<" is a prime factor of "<<n<<endl;
        }
        count = 0;
    }
}