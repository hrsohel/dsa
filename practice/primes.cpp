#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1;
    cout << "Enter the limit: ";
    cin >> n;
    cout << 2 << " ";
    for (int i = 3; i <= n; i = i + 3)
    {
        if (i % 2 == 0 || i > 10 && i % 5 != 0)
        {
            cout << i - 1 << " ";
            cout << i + 1 << " ";
            count++;
        }
    }
    cout << endl;
    // cout << "There are " << count << " prime numbers";
}