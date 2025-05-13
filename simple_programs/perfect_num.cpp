/*A perfect number is a positive integer where the sum of its 
proper divisors (divisors excluding the number itself) equals 
the number. In other words, the sum of all the factors of the 
number (excluding the number itself) is equal to the number itself*/
#include<iostream>
using namespace std;

int main()
{
    int n,i=1, sum=0;
    cout<<"Enter any number: ";
    cin>>n;
    while(i<n)
    {
        if(n%i == 0)
            sum += i;
        i++;
    }
    if(sum == n)
        cout<<n<<" is a perfect number\n";
    else
        cout<<n<<" is not a perfect number\n";
}