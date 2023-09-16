#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    int primes[n + 3], count = 0;
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
    for (int i = 2; i < n; i++)
    {
        if (primes[i] == 0)
        {
            count++;
            cout << i << " ";
        }
    }
    cout << "\nThere are " << count << " prime numbers";
}

int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    sieve(n);
    return 0;
}