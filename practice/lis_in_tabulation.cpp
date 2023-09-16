#include <bits/stdc++.h>
using namespace std;

int lis(int arr[], int n)
{
    int Lis[n], max;
    for (int i = 0; i < n; i++)
        Lis[i] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && Lis[i] < Lis[j] + 1)
                Lis[i] = Lis[j] + 1;
        }
    }
    max = Lis[0];
    for (int i = 0; i < n; i++)
    {
        if (Lis[i] > max)
            max = Lis[i];
    }

    return max;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Longest Increasing Subsequence: " << lis(arr, n);
}