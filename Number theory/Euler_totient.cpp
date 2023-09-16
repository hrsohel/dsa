#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        gcd(b, a % b);
}

int main()
{
    int n, count = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (gcd(i, n) == 1)
        {
            cout << i << " ";
            count++;
        }
    }
    cout << endl
         << count;
}