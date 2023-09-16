#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int r;
    if (b == 0)
        return a;
    else
        gcd(b, a % b);
}

int main()
{
    int a, b, c;
    cout << "Enter the values of a\n";
    cin >> a;
    cout << "Enter the value of b\n";
    cin >> b;
    cout << "Enter the value of c\n";
    cin >> c;
    int gcdValue = gcd(a, b);
    cout << "GCD is " << gcdValue;
}