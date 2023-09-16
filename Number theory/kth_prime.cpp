#include <bits/stdc++.h>
using namespace std;
vector<int> v;

void sieve(int n, int m)
{
    int primes[n + 3], count = 0, k;
    memset(primes, 0, sizeof(primes));
    for (int i = 2; i < sqrt(n); i++)
    {
        if (primes[i] == 0)
        {
            for (int j = i * i; j < n; j += i)
            {
                primes[j] = 1;
            }
        }
    }
    cout << "Here list of prime numbers between 1 to " << n << "\n";
    for (k = 2; k < n; k++)
    {
        if (primes[k] == 0)
        {
            count++;
            v.push_back(k);
        }
    }
    cout << v[m - 1];
    // cout << "\nThere are " << count << " prime numbers";
}

int main()
{
    int n, m;
    cout << "Enter the number\n";
    cin >> n;
    cout << "Enter the nth number" << endl;
    cin >> m;
    sieve(n, m);
    return 0;
}