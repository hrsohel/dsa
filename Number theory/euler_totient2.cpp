#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main()
{
    int n, dup;
    float res = 1;
    cout << "Enter the n: ";
    cin >> n;
    dup = n;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }
    for (auto it : v)
        res = (float)res * (it - 1) / it;
    res = res * dup;
    cout << "Phi(" << dup << "): " << res;
}