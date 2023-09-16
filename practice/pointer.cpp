#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, *ptr = &a;
    cin >> a;
    cout << a;
    cout << *(++ptr);
    cout << *(ptr++);
}