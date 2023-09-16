#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long int fact(long long int n)
{
    long long int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= (ans * i) % mod;
    }
    return ans % mod;
}

long long int power(long long int base, long long int pow)
{
    long long int ans = 1;
    while (pow)
    {
        if (pow % 2 == 1)
        {
            ans = (ans * base) % mod;
            pow--;
        }
        else
        {
            base = (base * base) % mod;
            pow /= 2;
        }
    }
    return ans % mod;
}

long long int nCr(long long n1, long long r1, long long int k)
{
    long long int ans, ans1, ans2;
    ans1 = power(r1, mod);
    ans2 = power(k, mod);
    ans = ans1 % mod;
    ans = ans2 % mod;
    return ans % mod;
}

int main()
{
    long long int n, r, n1, r1, k, ans;
    cout << "Enter the vakue of n and r: ";
    cin >> n >> r;
    n1 = fact(n);
    r1 = fact(r);
    k = fact(n - r);
    ans = nCr(n1, r1, k);
    cout << "Result: " << ans << endl;
}