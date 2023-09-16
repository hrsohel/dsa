#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    int mod, ans = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    cout << "Enter the modulus" << endl;
    cin >> mod;
    for (int i = 0; i < num.size(); i++)
    {
        ans = (ans * 10 + num[i] - '0') % mod;
        // ans *= ans % mod;
    }
    if (ans % mod == 0)
        cout << num << " is divible by " << mod << endl;
    else
        cout << num << " is not divible by " << mod << endl;
}