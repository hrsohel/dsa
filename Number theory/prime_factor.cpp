#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0, i, prime = 0, prime_factors = 0, copy_num;
    cout << "Enter a number: ";
    cin >> n;
    copy_num = n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0 && n != 1)
        {
            while (n % i == 0)
            {
                count++;
                n /= i;
            }
            cout << i << "^" << count << " * ";
            count = 0;
            prime = 1;
            prime_factors++;
        }
    }
    if (n > 1)
        prime_factors++;
    cout << n << "^" << 1 << endl;
    cout << copy_num << ": " << prime_factors << endl;
    if (prime == 0)
        cout << "number is prime";
}
