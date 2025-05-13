/*An Armstrong number is a special number that 
equals the sum of its own digits, each raised 
to the power of the number of digits. For example, 
153 is an Armstrong number because 
1^3 + 5^3 + 3^3 = 153*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,m,sum=0,digit,count=0;
    cout<<"Enter any number: ";
    cin>>n;
    m=n;
    while(m>0)
    {
        m/=10;
        count++;
    }
    m=n;
    while (m>0)
    {
        digit=m%10;
        sum+=pow(digit,count);
        m/=10;
    }
    if(sum==n)
        cout<<n<<" is a armstrong number\n";
    else
        cout<<n<<" is not an armstrong number\n";
}