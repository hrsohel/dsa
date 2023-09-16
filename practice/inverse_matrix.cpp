#include <bits/stdc++.h>
using namespace std;

int det22(int a, int b, int c, int d)
{
    return a * d - b * c;
}

int det33(int A[3][3])
{
    return A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) - A[0][1] * (A[1][0] * A[2][2] - A[2][0] * A[1][2]) + A[0][2] * (A[1][0] - A[2][1]);
}

int main()
{
    int A[3][3], In[3][3];
    cout << "Enter matrix elements: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    // In[0][0] = (A[1][1] * A[2][2] - A[2][1]*A[1][2]) / det33(A); In[0][1] = (A[1][2] * A[2][0] * A[1][0] * A[2][2]) / det33(A);

    // In[0][2] = (A[1][1]*A[2][0] * A[1][0]*A[2][0]) / det33(A); In[]
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 2; k >= 0; k--)
            {
            }
        }
    }
}