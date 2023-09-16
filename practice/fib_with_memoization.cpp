#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int fib(int n)
{
    if (v[n] == -1)
    {
        if (n <= 1)
            v[n] = n;
        else
            v[n] = fib(n - 1) + fib(n - 2);
    }
    return v[n];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        v.push_back(-1);
    cout << fib(n);
}