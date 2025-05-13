/*A strong number is a positive integer where the sum 
of the factorials of its digits equals the number itself. 
For example, 145 is a strong number because 
1! + 4! + 5! = 1 + 24 + 120 = 145*/

#include<iostream>
using namespace std;

int main()
{
    int n, m, digit, fact, i, sum = 0;
    cout << "Enter any number: ";
    cin >> n;

    m = n;

    while (m > 0)
    {
        digit = m % 10;

        fact = 1;
        i = 1;
        while (i <= digit)
        {
            fact *= i;
            i++;
        }

        sum += fact;
        m /= 10;
    }

    if (sum == n)
        cout << n << " is a strong number\n";
    else
        cout << n << " is not a strong number\n";

    return 0;
}
