#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, iprime = 0, i;
    cout << "Enter the value of a\n";
    cin >> a;
    if (a == 2)
        iprime = 0;
    else if (a < 2)
        iprime = 1;
    else if (a % 2 == 0)
        iprime = 1;
    else
    {
        for (i = 3; i < sqrt(a); i += 2)
        {
            if (a % i == 0)
            {
                iprime = 1;
                break;
            }
        }
    }
    if (iprime == 0)
        cout << a << " is prime number\n";
    else
        cout << a << " is not prime number\n";
    return 0;
}