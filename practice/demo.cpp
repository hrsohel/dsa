#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;
    cout << "LCM: " << (a * b) / gcd(a, b) << endl;
    cout << "GCD: " << gcd(a, b);
}