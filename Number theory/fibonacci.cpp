#include <bits/stdc++.h>
using namespace std;

void multi(int A[2][2], int I[2][2])
{
    int mul[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                mul[i][j] += A[i][k] * I[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            I[i][j] = mul[i][j];
        }
    }
}

void display(int A[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[2] = {0, 1}, A[2][2] = {{0, 1}, {1, 1}}, I[2][2] = {{1, 0}, {0, 1}}, n;
    cout << "Enter power: ";
    cin >> n;
    while (n)
    {
        if (n % 2 == 1)
        {
            multi(A, I);
            n--;
        }
        else
        {
            multi(A, A);
            n /= 2;
        }
    }
    // display(I);
    cout << endl;
    cout << a[0] * I[0][1] + a[1] * I[1][1];
}