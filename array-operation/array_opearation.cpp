#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insert(int arr[], int n, int pos, int value)
{
    if (pos <= n)
    {
        for (int i = n; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = value;
        n++;
        display(arr, n);
    }
    else if (pos > n)
    {
        arr[n] = value;
        n++;
        display(arr, n);
    }
}

void deleteArray(int arr[], int n, int pos)
{
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    display(arr, n);
}

void update(int arr[], int n, int pos, int value)
{
    int i = 0;
    while (i < pos)
        i++;
    arr[i] = value;
}

int main()
{
    int arr[20] = {6, 8, 4, 3, 5, 1}, *ptr = arr;
    display(arr, 6);
    // cout << endl;
    // insert(arr, 6, 1, 10);
    cout << endl;
    // deleteArray(arr, 6, 1);
    update(arr, 6, 4, 10);
    display(arr, 6);
}