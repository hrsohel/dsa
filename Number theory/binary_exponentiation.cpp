#include <bits/stdc++.h>
using namespace std;

int main()
{
    int base, power, res = 1;
    cout << "Enter a base" << endl;
    cin >> base;
    cout << "Enter a power" << endl;
    cin >> power;
    while (power != 0)
    {
        if (power % 2 == 1)
        {
            res *= base;
            power -= 1;
        }
        else
        {
            base *= base;
            power /= 2;
        }
    }
    cout << "Result: " << res << endl;
}