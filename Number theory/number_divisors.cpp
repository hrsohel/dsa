#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter a number" << endl;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "(" << i << ", " << (n / i) << "), ";
            count += 2;
            // n /= i;
        }
        if (i == (n / i))
            count--;
    }
    cout << "\nThere are " << count << " divisors." << endl;
    if (count == 2)
        cout << n << " is prime number" << endl;
}