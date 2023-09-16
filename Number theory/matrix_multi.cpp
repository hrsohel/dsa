#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[2][2] = {{1, 2}, {3, 4}}, ans[2][2], B[2][2] = {A[2][2]};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                ans[i][j] += A[i][k] * A[k][j];
            }
        }
    }
    cout << "Matrix multiplication: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}