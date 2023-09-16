#include <bits/stdc++.h>
using namespace std;
vector<int> v;

bool is_sorted(int n)
{
    if (n == 1)
        return true;
    else if (v[n] < v[n + 1])
        return is_sorted(n + 1);
    else
        return false;
}

int main()
{
    v = {1, 3, 9, 6, 7, 8};
    is_sorted(v.size()) ? cout << "Array sorted" : cout << "Array not sorted";
}