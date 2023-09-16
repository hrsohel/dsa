#include <bits/stdc++.h>
#define n 2
using namespace std;

void multi(int A[n][n], int B[n][n])
{
    int ans[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                ans[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = ans[i][j];
        }
    }
}

void display(int A[n][n])
{
    cout << "Matrix Mutiplication Result: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int I[n][n], A[n][n], power;
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter The Power: ";
    cin >> power;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                I[i][j] = 1;
            else
                I[i][j] = 0;
        }
    }
    while (power)
    {
        if (power % 2 != 0)
        {
            multi(A, I);
            power--;
        }
        else
        {
            multi(A, A);
            power /= 2;
        }
    }
    display(I);
}