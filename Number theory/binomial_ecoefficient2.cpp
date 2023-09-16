#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int nCr(long long int c, long long int r)
{
    long long int ans = 1;
    if (r > c)
        return 0;
    if (r > c - r)
        r = c - r;
    for (int i = 0; i < r; i++)
    {
        ans = ans * (c - i) % mod;
        ans = (ans / (i + 1)) % mod;
    }
    return ans % mod;
}

int main()
{
    long long int c, r;
    cout << "Enter the value of C and r: ";
    cin >> c >> r;
    cout << c << "C" << r << ": " << nCr(c, r);
}