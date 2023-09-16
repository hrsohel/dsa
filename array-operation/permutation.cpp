#include <bits/stdc++.h>
using namespace std;
set<char> s;

int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

int main()
{
    string str;
    int count = 0, res = 1;
    cout << "Enter string: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        s.insert(str[i]);
    }
    res = factorial(str.length());
    for (auto it = s.begin(); it != s.end(); it++)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (*it == str[i])
                count++;
        }
        res = res / factorial(count);
        cout << *it << ": " << count << endl;
        count = 0;
    }
    cout << "Permutation: " << res;
}