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
    int a, b, lcm;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    lcm = (a * b) / gcd(a, b);
    cout << "LCM is: " << lcm;
}